; Listing generated by Microsoft (R) Optimizing Compiler Version 19.14.26430.0 

	TITLE	C:\Users\caissa\source\repos\[Section 2] Template Basic\[Section 2] Template Basic\11 variable template.cpp
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	?__empty_global_delete@@YAXPAX@Z		; __empty_global_delete
PUBLIC	?__empty_global_delete@@YAXPAXI@Z		; __empty_global_delete
PUBLIC	?__empty_global_delete@@YAXPAXW4align_val_t@std@@@Z ; __empty_global_delete
PUBLIC	?__empty_global_delete@@YAXPAXIW4align_val_t@std@@@Z ; __empty_global_delete
PUBLIC	_main
PUBLIC	??$foo@M@@YAXMM@Z				; foo<float>
PUBLIC	__real@4048f5c3
PUBLIC	__real@40533333
EXTRN	__RTC_CheckEsp:PROC
EXTRN	__RTC_InitBase:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	__fltused:DWORD
;	COMDAT __real@40533333
CONST	SEGMENT
__real@40533333 DD 040533333r			; 3.3
CONST	ENDS
;	COMDAT __real@4048f5c3
CONST	SEGMENT
__real@4048f5c3 DD 04048f5c3r			; 3.14
CONST	ENDS
;	COMDAT rtc$TMZ
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
rtc$IMZ	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File c:\users\caissa\source\repos\[section 2] template basic\[section 2] template basic\11 variable template.cpp
;	COMDAT ??$foo@M@@YAXMM@Z
_TEXT	SEGMENT
_a$ = 8							; size = 4
_b$ = 12						; size = 4
??$foo@M@@YAXMM@Z PROC					; foo<float>, COMDAT

; 17   : {

	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48					; 00000030H
	mov	eax, -858993460				; ccccccccH
	rep stosd

; 18   : 
; 19   : }

	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
??$foo@M@@YAXMM@Z ENDP					; foo<float>
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File c:\users\caissa\source\repos\[section 2] template basic\[section 2] template basic\11 variable template.cpp
;	COMDAT _main
_TEXT	SEGMENT
_f$ = -8						; size = 4
_main	PROC						; COMDAT

; 22   : {

	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd

; 23   : 	float f = 3.3f;

	movss	xmm0, DWORD PTR __real@40533333
	movss	DWORD PTR _f$[ebp], xmm0

; 24   : 	foo(f, pi<float>);		// 둘의 타입이 다르다.

	push	ecx
	movss	xmm0, DWORD PTR __real@4048f5c3
	movss	DWORD PTR [esp], xmm0
	push	ecx
	movss	xmm0, DWORD PTR _f$[ebp]
	movss	DWORD PTR [esp], xmm0
	call	??$foo@M@@YAXMM@Z			; foo<float>
	add	esp, 8

; 25   : }

	xor	eax, eax
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_main	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File c:\users\caissa\source\repos\[section 2] template basic\[section 2] template basic\11 variable template.cpp
;	COMDAT ?__empty_global_delete@@YAXPAXIW4align_val_t@std@@@Z
_TEXT	SEGMENT
___formal$ = 8						; size = 4
___formal$ = 12						; size = 4
___formal$ = 16						; size = 4
?__empty_global_delete@@YAXPAXIW4align_val_t@std@@@Z PROC ; __empty_global_delete, COMDAT

	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48					; 00000030H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?__empty_global_delete@@YAXPAXIW4align_val_t@std@@@Z ENDP ; __empty_global_delete
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File c:\users\caissa\source\repos\[section 2] template basic\[section 2] template basic\11 variable template.cpp
;	COMDAT ?__empty_global_delete@@YAXPAXW4align_val_t@std@@@Z
_TEXT	SEGMENT
___formal$ = 8						; size = 4
___formal$ = 12						; size = 4
?__empty_global_delete@@YAXPAXW4align_val_t@std@@@Z PROC ; __empty_global_delete, COMDAT

	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48					; 00000030H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?__empty_global_delete@@YAXPAXW4align_val_t@std@@@Z ENDP ; __empty_global_delete
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File c:\users\caissa\source\repos\[section 2] template basic\[section 2] template basic\11 variable template.cpp
;	COMDAT ?__empty_global_delete@@YAXPAXI@Z
_TEXT	SEGMENT
___formal$ = 8						; size = 4
___formal$ = 12						; size = 4
?__empty_global_delete@@YAXPAXI@Z PROC			; __empty_global_delete, COMDAT

	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48					; 00000030H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?__empty_global_delete@@YAXPAXI@Z ENDP			; __empty_global_delete
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File c:\users\caissa\source\repos\[section 2] template basic\[section 2] template basic\11 variable template.cpp
;	COMDAT ?__empty_global_delete@@YAXPAX@Z
_TEXT	SEGMENT
___formal$ = 8						; size = 4
?__empty_global_delete@@YAXPAX@Z PROC			; __empty_global_delete, COMDAT

	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48					; 00000030H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?__empty_global_delete@@YAXPAX@Z ENDP			; __empty_global_delete
_TEXT	ENDS
END
