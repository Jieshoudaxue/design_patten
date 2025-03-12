
bin/cycaolibcpp.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <addWrapper>:
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
   4:	48 83 ec 10          	sub    $0x10,%rsp
   8:	89 7d fc             	mov    %edi,-0x4(%rbp)
   b:	89 75 f8             	mov    %esi,-0x8(%rbp)
   e:	8b 55 f8             	mov    -0x8(%rbp),%edx
  11:	8b 45 fc             	mov    -0x4(%rbp),%eax
  14:	89 d6                	mov    %edx,%esi
  16:	89 c7                	mov    %eax,%edi
  18:	e8 00 00 00 00       	callq  1d <addWrapper+0x1d>
  1d:	90                   	nop
  1e:	c9                   	leaveq 
  1f:	c3                   	retq   
