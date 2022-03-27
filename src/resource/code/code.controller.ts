import { Controller, Get } from '@nestjs/common';
import { renameSync } from 'fs';
import { CodeService } from './code.service';

@Controller('code')
export class CodeController {
  constructor(private readonly codeService: CodeService) {}

  @Get('/submit')
  async generateCode(): Promise<any> {
    let time = Date.now();

    const check = await this.codeService.compile('./codes/test.c');
    console.log(check);
    renameSync('./a.out', './codes/' + time + '.out');
    const execFile = await this.codeService.execute('./codes/' + time + '.out');

    time = Date.now() - time;
    return { response: execFile, time: time + 'ms' };
  }
}
