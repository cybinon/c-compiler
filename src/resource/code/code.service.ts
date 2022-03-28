import { HttpException, Injectable } from '@nestjs/common';
import { exec } from 'child_process';

@Injectable()
export class CodeService {
  async compile(path: string, output?: string): Promise<any> {
    console.log(output);
    const compiler = await new Promise((resolve, reject) => {
      exec(
        `gcc -o ./codes/${output || 'a.out'} ` + path,
        (err, stdout, stderr) => {
          if (stderr) reject(err);
          if (err) reject(err);
          resolve(stdout);
        },
      );
    }).catch((err) => {
      throw new HttpException(err.message, 500);
    });

    return compiler;
  }

  async execute(path: string): Promise<any> {
    const compiler = await new Promise((resolve, reject) => {
      exec(path, (err, stdout, stderr) => {
        if (err) {
          console.log(err);
          console.log(stderr);
          reject(err);
        } else {
          resolve(stdout);
        }
      });
    });
    return compiler;
  }
}
