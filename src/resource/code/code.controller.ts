import {
  Controller,
  HttpException,
  Post,
  UploadedFile,
  UseInterceptors,
} from '@nestjs/common';
import { FileInterceptor } from '@nestjs/platform-express';
import { writeFileSync } from 'fs';
import * as path from 'node:path';
import { CodeService } from './code.service';

@Controller('code')
export class CodeController {
  constructor(private readonly codeService: CodeService) {}

  @UseInterceptors(FileInterceptor('file'))
  @Post('/submit')
  async generateCode(@UploadedFile() file: Express.Multer.File): Promise<any> {
    let time = Date.now();

    if (!file) throw new HttpException('File not found', 404);

    const fileName = `${time.toString(36)}_${file.originalname}`;
    const pathCfile = path.join(__dirname, `../../../codes/${fileName}`);

    writeFileSync(pathCfile, file.buffer, 'binary');

    const check = await this.codeService.compile(pathCfile, time + '.out');
    console.log(check);

    let executeTime = Date.now();
    const execFile = await this.codeService.execute('./codes/' + time + '.out');
    executeTime = Date.now() - executeTime;

    time = Date.now() - time;
    return { response: execFile, time: executeTime + 'ms' };
  }
}
