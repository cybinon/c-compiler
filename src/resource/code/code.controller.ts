import { Controller, Get } from '@nestjs/common';
import { CodeService } from './code.service';

@Controller('code')
export class CodeController {
  constructor(private readonly codeService: CodeService) {}

  @Get('/submit')
  async generateCode(): Promise<string> {
    const check = await this.codeService.compile('./codes/test.c');
    const execFile = await this.codeService.execute('./codes/a.out');
    return execFile;
  }
}
