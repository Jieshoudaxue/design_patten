
bin/addcpp:     file format elf64-x86-64


Disassembly of section .init:

0000000000400390 <_init>:
  400390:	48 83 ec 08          	sub    $0x8,%rsp
  400394:	48 8b 05 5d 0c 20 00 	mov    0x200c5d(%rip),%rax        # 600ff8 <_DYNAMIC+0x1d0>
  40039b:	48 85 c0             	test   %rax,%rax
  40039e:	74 05                	je     4003a5 <_init+0x15>
  4003a0:	e8 2b 00 00 00       	callq  4003d0 <__libc_start_main@plt+0x10>
  4003a5:	48 83 c4 08          	add    $0x8,%rsp
  4003a9:	c3                   	retq   

Disassembly of section .plt:

00000000004003b0 <__libc_start_main@plt-0x10>:
  4003b0:	ff 35 52 0c 20 00    	pushq  0x200c52(%rip)        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  4003b6:	ff 25 54 0c 20 00    	jmpq   *0x200c54(%rip)        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  4003bc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004003c0 <__libc_start_main@plt>:
  4003c0:	ff 25 52 0c 20 00    	jmpq   *0x200c52(%rip)        # 601018 <_GLOBAL_OFFSET_TABLE_+0x18>
  4003c6:	68 00 00 00 00       	pushq  $0x0
  4003cb:	e9 e0 ff ff ff       	jmpq   4003b0 <_init+0x20>

Disassembly of section .plt.got:

00000000004003d0 <.plt.got>:
  4003d0:	ff 25 22 0c 20 00    	jmpq   *0x200c22(%rip)        # 600ff8 <_DYNAMIC+0x1d0>
  4003d6:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

00000000004003e0 <_start>:
  4003e0:	31 ed                	xor    %ebp,%ebp
  4003e2:	49 89 d1             	mov    %rdx,%r9
  4003e5:	5e                   	pop    %rsi
  4003e6:	48 89 e2             	mov    %rsp,%rdx
  4003e9:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  4003ed:	50                   	push   %rax
  4003ee:	54                   	push   %rsp
  4003ef:	49 c7 c0 80 05 40 00 	mov    $0x400580,%r8
  4003f6:	48 c7 c1 10 05 40 00 	mov    $0x400510,%rcx
  4003fd:	48 c7 c7 d6 04 40 00 	mov    $0x4004d6,%rdi
  400404:	e8 b7 ff ff ff       	callq  4003c0 <__libc_start_main@plt>
  400409:	f4                   	hlt    
  40040a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400410 <deregister_tm_clones>:
  400410:	b8 37 10 60 00       	mov    $0x601037,%eax
  400415:	55                   	push   %rbp
  400416:	48 2d 30 10 60 00    	sub    $0x601030,%rax
  40041c:	48 83 f8 0e          	cmp    $0xe,%rax
  400420:	48 89 e5             	mov    %rsp,%rbp
  400423:	76 1b                	jbe    400440 <deregister_tm_clones+0x30>
  400425:	b8 00 00 00 00       	mov    $0x0,%eax
  40042a:	48 85 c0             	test   %rax,%rax
  40042d:	74 11                	je     400440 <deregister_tm_clones+0x30>
  40042f:	5d                   	pop    %rbp
  400430:	bf 30 10 60 00       	mov    $0x601030,%edi
  400435:	ff e0                	jmpq   *%rax
  400437:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  40043e:	00 00 
  400440:	5d                   	pop    %rbp
  400441:	c3                   	retq   
  400442:	0f 1f 40 00          	nopl   0x0(%rax)
  400446:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40044d:	00 00 00 

0000000000400450 <register_tm_clones>:
  400450:	be 30 10 60 00       	mov    $0x601030,%esi
  400455:	55                   	push   %rbp
  400456:	48 81 ee 30 10 60 00 	sub    $0x601030,%rsi
  40045d:	48 c1 fe 03          	sar    $0x3,%rsi
  400461:	48 89 e5             	mov    %rsp,%rbp
  400464:	48 89 f0             	mov    %rsi,%rax
  400467:	48 c1 e8 3f          	shr    $0x3f,%rax
  40046b:	48 01 c6             	add    %rax,%rsi
  40046e:	48 d1 fe             	sar    %rsi
  400471:	74 15                	je     400488 <register_tm_clones+0x38>
  400473:	b8 00 00 00 00       	mov    $0x0,%eax
  400478:	48 85 c0             	test   %rax,%rax
  40047b:	74 0b                	je     400488 <register_tm_clones+0x38>
  40047d:	5d                   	pop    %rbp
  40047e:	bf 30 10 60 00       	mov    $0x601030,%edi
  400483:	ff e0                	jmpq   *%rax
  400485:	0f 1f 00             	nopl   (%rax)
  400488:	5d                   	pop    %rbp
  400489:	c3                   	retq   
  40048a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400490 <__do_global_dtors_aux>:
  400490:	80 3d 99 0b 20 00 00 	cmpb   $0x0,0x200b99(%rip)        # 601030 <__TMC_END__>
  400497:	75 11                	jne    4004aa <__do_global_dtors_aux+0x1a>
  400499:	55                   	push   %rbp
  40049a:	48 89 e5             	mov    %rsp,%rbp
  40049d:	e8 6e ff ff ff       	callq  400410 <deregister_tm_clones>
  4004a2:	5d                   	pop    %rbp
  4004a3:	c6 05 86 0b 20 00 01 	movb   $0x1,0x200b86(%rip)        # 601030 <__TMC_END__>
  4004aa:	f3 c3                	repz retq 
  4004ac:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004004b0 <frame_dummy>:
  4004b0:	bf 20 0e 60 00       	mov    $0x600e20,%edi
  4004b5:	48 83 3f 00          	cmpq   $0x0,(%rdi)
  4004b9:	75 05                	jne    4004c0 <frame_dummy+0x10>
  4004bb:	eb 93                	jmp    400450 <register_tm_clones>
  4004bd:	0f 1f 00             	nopl   (%rax)
  4004c0:	b8 00 00 00 00       	mov    $0x0,%eax
  4004c5:	48 85 c0             	test   %rax,%rax
  4004c8:	74 f1                	je     4004bb <frame_dummy+0xb>
  4004ca:	55                   	push   %rbp
  4004cb:	48 89 e5             	mov    %rsp,%rbp
  4004ce:	ff d0                	callq  *%rax
  4004d0:	5d                   	pop    %rbp
  4004d1:	e9 7a ff ff ff       	jmpq   400450 <register_tm_clones>

00000000004004d6 <main>:
  4004d6:	55                   	push   %rbp
  4004d7:	48 89 e5             	mov    %rsp,%rbp
  4004da:	be 05 00 00 00       	mov    $0x5,%esi
  4004df:	bf 02 00 00 00       	mov    $0x2,%edi
  4004e4:	e8 07 00 00 00       	callq  4004f0 <_Z3addii>
  4004e9:	b8 00 00 00 00       	mov    $0x0,%eax
  4004ee:	5d                   	pop    %rbp
  4004ef:	c3                   	retq   

00000000004004f0 <_Z3addii>:
  4004f0:	55                   	push   %rbp
  4004f1:	48 89 e5             	mov    %rsp,%rbp
  4004f4:	89 7d fc             	mov    %edi,-0x4(%rbp)
  4004f7:	89 75 f8             	mov    %esi,-0x8(%rbp)
  4004fa:	8b 55 fc             	mov    -0x4(%rbp),%edx
  4004fd:	8b 45 f8             	mov    -0x8(%rbp),%eax
  400500:	01 d0                	add    %edx,%eax
  400502:	5d                   	pop    %rbp
  400503:	c3                   	retq   
  400504:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40050b:	00 00 00 
  40050e:	66 90                	xchg   %ax,%ax

0000000000400510 <__libc_csu_init>:
  400510:	41 57                	push   %r15
  400512:	41 56                	push   %r14
  400514:	41 89 ff             	mov    %edi,%r15d
  400517:	41 55                	push   %r13
  400519:	41 54                	push   %r12
  40051b:	4c 8d 25 ee 08 20 00 	lea    0x2008ee(%rip),%r12        # 600e10 <__frame_dummy_init_array_entry>
  400522:	55                   	push   %rbp
  400523:	48 8d 2d ee 08 20 00 	lea    0x2008ee(%rip),%rbp        # 600e18 <__init_array_end>
  40052a:	53                   	push   %rbx
  40052b:	49 89 f6             	mov    %rsi,%r14
  40052e:	49 89 d5             	mov    %rdx,%r13
  400531:	4c 29 e5             	sub    %r12,%rbp
  400534:	48 83 ec 08          	sub    $0x8,%rsp
  400538:	48 c1 fd 03          	sar    $0x3,%rbp
  40053c:	e8 4f fe ff ff       	callq  400390 <_init>
  400541:	48 85 ed             	test   %rbp,%rbp
  400544:	74 20                	je     400566 <__libc_csu_init+0x56>
  400546:	31 db                	xor    %ebx,%ebx
  400548:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  40054f:	00 
  400550:	4c 89 ea             	mov    %r13,%rdx
  400553:	4c 89 f6             	mov    %r14,%rsi
  400556:	44 89 ff             	mov    %r15d,%edi
  400559:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  40055d:	48 83 c3 01          	add    $0x1,%rbx
  400561:	48 39 eb             	cmp    %rbp,%rbx
  400564:	75 ea                	jne    400550 <__libc_csu_init+0x40>
  400566:	48 83 c4 08          	add    $0x8,%rsp
  40056a:	5b                   	pop    %rbx
  40056b:	5d                   	pop    %rbp
  40056c:	41 5c                	pop    %r12
  40056e:	41 5d                	pop    %r13
  400570:	41 5e                	pop    %r14
  400572:	41 5f                	pop    %r15
  400574:	c3                   	retq   
  400575:	90                   	nop
  400576:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40057d:	00 00 00 

0000000000400580 <__libc_csu_fini>:
  400580:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000400584 <_fini>:
  400584:	48 83 ec 08          	sub    $0x8,%rsp
  400588:	48 83 c4 08          	add    $0x8,%rsp
  40058c:	c3                   	retq   
