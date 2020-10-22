// positive sp value has been detected, the output may be wrong!
unsigned __int64 __fastcall sub_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char* a5)
{
    void* v5; // rsp
    __int64 hAdvapi; // rax
    __int64 v7; // rax
    __int64 hKernel32_1; // rax
    __int64 hMsvcrt; // rax
    __int64 hMsvcrt_1; // rax
    unsigned int currentProcessId; // eax
    __int64 hUser32_12; // rax
    unsigned __int64 result; // rax
    __int64 hMsvcrt_2; // rax
    __int64 hMsvcrt_3; // rax
    __int64 hMsvcrt_4; // rax
    __int64 hUser32; // rax
    __int64 hUser32_1; // rax
    __int64 hUser32_2; // rax
    __int64 hUser32_3; // rax
    __int64 hUser32_4; // rax
    unsigned int currentProcessId_1; // eax
    __int64 hUser32_5; // rax
    __int64 hUser32_6; // rax
    __int64 hUser32_7; // rax
    __int64 hUser32_8; // rax
    __int64 QueryFullProcessImageNameW; // rax
    __int64 hUser32_9; // rax
    __int64 hUser32_10; // rax
    __int64 hUser32_11; // rax
    __int64 hMsvcrt_5; // rax
    __int64 v32; // rax
    char v33; // al
    __int64 v34; // rax
    __int64 hCurrentProcess_1; // rax
    unsigned __int64 v36; // rdx
    __int64 v37; // [rsp-73A8h] [rbp-73B8h]
    __int64 v38; // [rsp-73A0h] [rbp-73B0h]
    int v39; // [rsp-7388h] [rbp-7398h]
    int v40; // [rsp-7384h] [rbp-7394h]
    int v41; // [rsp-7384h] [rbp-7394h]
    int v42; // [rsp-7384h] [rbp-7394h]
    int v43; // [rsp-7384h] [rbp-7394h]
    int v44; // [rsp-7384h] [rbp-7394h]
    int v45; // [rsp-7384h] [rbp-7394h]
    int v46; // [rsp-7384h] [rbp-7394h]
    int v47; // [rsp-7384h] [rbp-7394h]
    int v48; // [rsp-7384h] [rbp-7394h]
    unsigned int v49; // [rsp-7380h] [rbp-7390h]
    unsigned __int8 v50; // [rsp-737Ch] [rbp-738Ch]
    __int64 hModule; // [rsp-7378h] [rbp-7388h]
    unsigned int i14; // [rsp-7370h] [rbp-7380h]
    char v53; // [rsp-736Ch] [rbp-737Ch]
    bool v54; // [rsp-736Bh] [rbp-737Bh]
    unsigned int v55; // [rsp-7368h] [rbp-7378h]
    unsigned int v56; // [rsp-7364h] [rbp-7374h]
    __int64 v57; // [rsp-7360h] [rbp-7370h]
    bool v58; // [rsp-7358h] [rbp-7368h]
    unsigned int ii; // [rsp-7354h] [rbp-7364h]
    char v60; // [rsp-7350h] [rbp-7360h]
    bool v61; // [rsp-734Fh] [rbp-735Fh]
    unsigned __int8 v62; // [rsp-734Eh] [rbp-735Eh]
    int v63; // [rsp-734Ch] [rbp-735Ch]
    __int64 hKernel32; // [rsp-7348h] [rbp-7358h]
    unsigned __int8* NtReadVirtualMemory; // [rsp-7340h] [rbp-7350h]
    bool v66; // [rsp-7338h] [rbp-7348h]
    bool v67; // [rsp-7337h] [rbp-7347h]
    void(__fastcall * CloseHandle)(__int64); // [rsp-7330h] [rbp-7340h]
    unsigned int i15; // [rsp-7328h] [rbp-7338h]
    int k; // [rsp-7324h] [rbp-7334h]
    unsigned int* v71; // [rsp-7320h] [rbp-7330h]
    unsigned int i19; // [rsp-7318h] [rbp-7328h]
    int i12; // [rsp-7314h] [rbp-7324h]
    bool v74; // [rsp-7310h] [rbp-7320h]
    int l; // [rsp-730Ch] [rbp-731Ch]
    int i2; // [rsp-7308h] [rbp-7318h]
    bool v77; // [rsp-7304h] [rbp-7314h]
    bool v78; // [rsp-7303h] [rbp-7313h]
    bool v79; // [rsp-7302h] [rbp-7312h]
    char v80; // [rsp-7301h] [rbp-7311h]
    char* v81; // [rsp-7300h] [rbp-7310h]
    unsigned __int64 v82; // [rsp-72F8h] [rbp-7308h]
    __int64 v83; // [rsp-72F0h] [rbp-7300h]
    unsigned __int64 v84; // [rsp-72E0h] [rbp-72F0h]
    int v85; // [rsp-72D8h] [rbp-72E8h]
    int v86; // [rsp-72D4h] [rbp-72E4h]
    int v87; // [rsp-72D0h] [rbp-72E0h]
    unsigned int m; // [rsp-72C8h] [rbp-72D8h]
    int n; // [rsp-72C4h] [rbp-72D4h]
    unsigned int v90; // [rsp-72C0h] [rbp-72D0h]
    int v91; // [rsp-72BCh] [rbp-72CCh]
    __int64(__fastcall * OpenProcess)(__int64, _QWORD, _QWORD); // [rsp-72B8h] [rbp-72C8h]
    __int64 v93; // [rsp-72B0h] [rbp-72C0h]
    __int64(__fastcall * jj)(__int64, __int64); // [rsp-72A8h] [rbp-72B8h]
    int v95; // [rsp-72A0h] [rbp-72B0h]
    int i3; // [rsp-729Ch] [rbp-72ACh]
    int i9; // [rsp-7298h] [rbp-72A8h]
    __int64 v98; // [rsp-7290h] [rbp-72A0h]
    char v99; // [rsp-7280h] [rbp-7290h]
    int v100; // [rsp-727Ch] [rbp-728Ch]
    int mm; // [rsp-7278h] [rbp-7288h]
    int i6; // [rsp-7274h] [rbp-7284h]
    int i17; // [rsp-7270h] [rbp-7280h]
    int i16; // [rsp-726Ch] [rbp-727Ch]
    char v105; // [rsp-7268h] [rbp-7278h]
    char v106; // [rsp-7267h] [rbp-7277h]
    char v107; // [rsp-7266h] [rbp-7276h]
    unsigned __int64 i; // [rsp-7260h] [rbp-7270h]
    int i22; // [rsp-7258h] [rbp-7268h]
    int i21; // [rsp-7254h] [rbp-7264h]
    unsigned int i1; // [rsp-7250h] [rbp-7260h]
    unsigned int i8; // [rsp-724Ch] [rbp-725Ch]
    int i20; // [rsp-7248h] [rbp-7258h]
    unsigned __int8* NtQueryVirtualMemory; // [rsp-7240h] [rbp-7250h]
    unsigned int* v115; // [rsp-7238h] [rbp-7248h]
    __int64 hCurrentProcess; // [rsp-7230h] [rbp-7240h]
    __int64 v117; // [rsp-7228h] [rbp-7238h]
    unsigned __int64 v118; // [rsp-7220h] [rbp-7230h]
    __int64 v119; // [rsp-7218h] [rbp-7228h]
    unsigned int v120; // [rsp-7208h] [rbp-7218h]
    char v121; // [rsp-7204h] [rbp-7214h]
    char v122; // [rsp-7203h] [rbp-7213h]
    __int64 (*GetCurrentProcessId)(void); // [rsp-7200h] [rbp-7210h]
    int v124; // [rsp-71F8h] [rbp-7208h]
    int v125; // [rsp-71F4h] [rbp-7204h]
    __int64 v126; // [rsp-71F0h] [rbp-7200h]
    __int64 v127; // [rsp-71E8h] [rbp-71F8h]
    char v128; // [rsp-71E0h] [rbp-71F0h]
    char v129; // [rsp-71DFh] [rbp-71EFh]
    char v130; // [rsp-71DCh] [rbp-71ECh]
    char v131; // [rsp-71DBh] [rbp-71EBh]
    unsigned int v132; // [rsp-71D8h] [rbp-71E8h]
    int nn; // [rsp-71D4h] [rbp-71E4h]
    int v134; // [rsp-71D0h] [rbp-71E0h]
    int i7; // [rsp-71CCh] [rbp-71DCh]
    unsigned int v136; // [rsp-71C8h] [rbp-71D8h]
    __int64 v137; // [rsp-71C0h] [rbp-71D0h]
    __int64 v138; // [rsp-71B8h] [rbp-71C8h]
    char v139; // [rsp-71B0h] [rbp-71C0h]
    char v140; // [rsp-71AFh] [rbp-71BFh]
    char v141; // [rsp-71AEh] [rbp-71BEh]
    __int64(__fastcall * WideCharToMultiByte)(__int64, _QWORD, __int64*, _QWORD, __int64, int, _QWORD, _QWORD); // [rsp-71A8h] [rbp-71B8h]
    int v143; // [rsp-71A0h] [rbp-71B0h]
    int v144; // [rsp-719Ch] [rbp-71ACh]
    unsigned int v145; // [rsp-7198h] [rbp-71A8h]
    unsigned int v146; // [rsp-7194h] [rbp-71A4h]
    unsigned int v147; // [rsp-7190h] [rbp-71A0h]
    __int64 v148; // [rsp-7188h] [rbp-7198h]
    __int64 v149; // [rsp-7178h] [rbp-7188h]
    __int64 v150; // [rsp-7170h] [rbp-7180h]
    __int64 v151; // [rsp-7168h] [rbp-7178h]
    __int64 v152; // [rsp-7158h] [rbp-7168h]
    __int64 v153; // [rsp-7150h] [rbp-7160h]
    __int64 v154; // [rsp-7148h] [rbp-7158h]
    __int64 v155; // [rsp-7140h] [rbp-7150h]
    __int64 v156; // [rsp-7138h] [rbp-7148h]
    __int64 v157; // [rsp-7130h] [rbp-7140h]
    unsigned __int64 j; // [rsp-7128h] [rbp-7138h]
    __int64 v159; // [rsp-7120h] [rbp-7130h]
    __int64 v160; // [rsp-7118h] [rbp-7128h]
    unsigned __int64 ll; // [rsp-7110h] [rbp-7120h]
    __int64 v162; // [rsp-7108h] [rbp-7118h]
    __int64 (*GetLastError)(void); // [rsp-7100h] [rbp-7110h]
    __int64 v164; // [rsp-70F8h] [rbp-7108h]
    __int64 v165; // [rsp-70F0h] [rbp-7100h]
    __int64 v166; // [rsp-70E0h] [rbp-70F0h]
    __int64 v167; // [rsp-70D0h] [rbp-70E0h]
    __int64 v168; // [rsp-70C0h] [rbp-70D0h]
    __int64 v169; // [rsp-70B0h] [rbp-70C0h]
    __int64 v170; // [rsp-70A0h] [rbp-70B0h]
    __int64 v171; // [rsp-7090h] [rbp-70A0h]
    __int64 v172; // [rsp-7080h] [rbp-7090h]
    __int64 v173; // [rsp-7070h] [rbp-7080h]
    __int64 v174; // [rsp-7060h] [rbp-7070h]
    __int64 v175; // [rsp-7050h] [rbp-7060h]
    __int64 v176; // [rsp-7040h] [rbp-7050h]
    __int64 v177; // [rsp-7030h] [rbp-7040h]
    char* v178; // [rsp-7020h] [rbp-7030h]
    __int64 v179; // [rsp-7010h] [rbp-7020h]
    __int64 v180; // [rsp-7000h] [rbp-7010h]
    __int64 v181; // [rsp-6FF0h] [rbp-7000h]
    __int64 v182; // [rsp-6FE0h] [rbp-6FF0h]
    __int64 v183; // [rsp-6FD0h] [rbp-6FE0h]
    __int64 v184; // [rsp-6FC0h] [rbp-6FD0h]
    __int64 v185; // [rsp-6FB0h] [rbp-6FC0h]
    __int64 v186; // [rsp-6FA0h] [rbp-6FB0h]
    char v187; // [rsp-6F90h] [rbp-6FA0h]
    char v188; // [rsp-6F8Fh] [rbp-6F9Fh]
    char v189; // [rsp-6F8Eh] [rbp-6F9Eh]
    char v190; // [rsp-6F8Dh] [rbp-6F9Dh]
    char v191; // [rsp-6F8Ch] [rbp-6F9Ch]
    char v192; // [rsp-6F8Bh] [rbp-6F9Bh]
    char v193; // [rsp-6F8Ah] [rbp-6F9Ah]
    char v194; // [rsp-6F89h] [rbp-6F99h]
    char v195; // [rsp-6F88h] [rbp-6F98h]
    char v196; // [rsp-6F87h] [rbp-6F97h]
    char v197; // [rsp-6F86h] [rbp-6F96h]
    char v198; // [rsp-6F85h] [rbp-6F95h]
    char v199; // [rsp-6F84h] [rbp-6F94h]
    __int64 v200; // [rsp-6F80h] [rbp-6F90h]
    __int64 v201; // [rsp-6F70h] [rbp-6F80h]
    __int64 v202; // [rsp-6F60h] [rbp-6F70h]
    __int64 v203; // [rsp-6F50h] [rbp-6F60h]
    __int64 v204; // [rsp-6F40h] [rbp-6F50h]
    __int64 v205; // [rsp-6F30h] [rbp-6F40h]
    __int64 v206; // [rsp-6F20h] [rbp-6F30h]
    __int64 v207; // [rsp-6F10h] [rbp-6F20h]
    __int64 v208; // [rsp-6F00h] [rbp-6F10h]
    __int64 v209; // [rsp-6EF0h] [rbp-6F00h]
    __int64 v210; // [rsp-6EE0h] [rbp-6EF0h]
    __int64 v211; // [rsp-6ED0h] [rbp-6EE0h]
    __int64 v212; // [rsp-6EC0h] [rbp-6ED0h]
    __int64 v213; // [rsp-6EB0h] [rbp-6EC0h]
    __int64 v214; // [rsp-6EA0h] [rbp-6EB0h]
    __int64 v215; // [rsp-6E90h] [rbp-6EA0h]
    __int64 v216; // [rsp-6E80h] [rbp-6E90h]
    __int64 v217; // [rsp-6E70h] [rbp-6E80h]
    __int64 v218; // [rsp-6E60h] [rbp-6E70h]
    __int64 v219; // [rsp-6E50h] [rbp-6E60h]
    __int64 v220; // [rsp-6E40h] [rbp-6E50h]
    __int64 v221; // [rsp-6E30h] [rbp-6E40h]
    __int64 v222; // [rsp-6E20h] [rbp-6E30h]
    __int64 v223; // [rsp-6E10h] [rbp-6E20h]
    __int64 v224; // [rsp-6E00h] [rbp-6E10h]
    __int64 v225; // [rsp-6DF0h] [rbp-6E00h]
    __int64 v226; // [rsp-6DE0h] [rbp-6DF0h]
    __int64 v227; // [rsp-6DD0h] [rbp-6DE0h]
    __int64 v228; // [rsp-6DC0h] [rbp-6DD0h]
    __int64 v229; // [rsp-6DB0h] [rbp-6DC0h]
    __int64 v230; // [rsp-6DA0h] [rbp-6DB0h]
    __int64 v231; // [rsp-6D90h] [rbp-6DA0h]
    __int64 v232; // [rsp-6D78h] [rbp-6D88h]
    __int64 v233; // [rsp-6D60h] [rbp-6D70h]
    __int64 v234; // [rsp-6D48h] [rbp-6D58h]
    __int64 v235; // [rsp-6D30h] [rbp-6D40h]
    __int64 v236; // [rsp-6D18h] [rbp-6D28h]
    __int64 v237; // [rsp-6D00h] [rbp-6D10h]
    __int64 v238; // [rsp-6CE8h] [rbp-6CF8h]
    __int64 v239; // [rsp-6CD0h] [rbp-6CE0h]
    __int64 v240; // [rsp-6CB8h] [rbp-6CC8h]
    __int64 v241; // [rsp-6CA0h] [rbp-6CB0h]
    __int64 v242; // [rsp-6C88h] [rbp-6C98h]
    __int64 v243; // [rsp-6C70h] [rbp-6C80h]
    __int64 v244; // [rsp-6C58h] [rbp-6C68h]
    __int64 v245; // [rsp-6C40h] [rbp-6C50h]
    __int64 v246; // [rsp-6C28h] [rbp-6C38h]
    __int64 v247; // [rsp-6C10h] [rbp-6C20h]
    __int64 v248; // [rsp-6BF8h] [rbp-6C08h]
    __int64 v249; // [rsp-6BE0h] [rbp-6BF0h]
    __int64 v250; // [rsp-6BC8h] [rbp-6BD8h]
    __int64 v251; // [rsp-6BB0h] [rbp-6BC0h]
    __int64 v252; // [rsp-6B98h] [rbp-6BA8h]
    __int64 v253; // [rsp-6B80h] [rbp-6B90h]
    __int64 v254; // [rsp-6B68h] [rbp-6B78h]
    __int64 v255; // [rsp-6B50h] [rbp-6B60h]
    __int64 v256; // [rsp-6B38h] [rbp-6B48h]
    __int64 v257; // [rsp-6B20h] [rbp-6B30h]
    __int64 v258; // [rsp-6B08h] [rbp-6B18h]
    __int64 v259; // [rsp-6AE8h] [rbp-6AF8h]
    __int64 v260; // [rsp-6AC8h] [rbp-6AD8h]
    __int64 v261; // [rsp-6AA8h] [rbp-6AB8h]
    __int64 v262; // [rsp-6A88h] [rbp-6A98h]
    __int64 v263; // [rsp-6A68h] [rbp-6A78h]
    __int64 v264; // [rsp-6A48h] [rbp-6A58h]
    __int64 v265; // [rsp-6A28h] [rbp-6A38h]
    __int64 v266; // [rsp-6A08h] [rbp-6A18h]
    __int64 v267; // [rsp-69E8h] [rbp-69F8h]
    __int64 v268; // [rsp-69B8h] [rbp-69C8h]
    __int64 v269; // [rsp-6980h] [rbp-6990h]
    __int64 v270; // [rsp-6948h] [rbp-6958h]
    __int64 v271; // [rsp-6908h] [rbp-6918h]
    __int64 v272; // [rsp-68C8h] [rbp-68D8h]
    int v273; // [rsp-68C4h] [rbp-68D4h]
    int v274; // [rsp-68C0h] [rbp-68D0h]
    unsigned int v275; // [rsp-68BCh] [rbp-68CCh]
    __int64 v276; // [rsp-68B8h] [rbp-68C8h]
    int v277; // [rsp-68B0h] [rbp-68C0h]
    int v278; // [rsp-68ACh] [rbp-68BCh]
    int v279; // [rsp-68A8h] [rbp-68B8h]
    unsigned int v280; // [rsp-68A4h] [rbp-68B4h]
    unsigned int v281; // [rsp-68A0h] [rbp-68B0h]
    int v282; // [rsp-689Ch] [rbp-68ACh]
    int v283; // [rsp-6898h] [rbp-68A8h]
    int i11; // [rsp-6894h] [rbp-68A4h]
    int v285; // [rsp-6890h] [rbp-68A0h]
    int i18; // [rsp-688Ch] [rbp-689Ch]
    unsigned int v287; // [rsp-6888h] [rbp-6898h]
    __int64 hNtdll; // [rsp-6880h] [rbp-6890h]
    __int64 v289; // [rsp-6878h] [rbp-6888h]
    __int64** v290; // [rsp-6870h] [rbp-6880h]
    __int64 memcpy_memmove; // [rsp-6868h] [rbp-6878h]
    __int64(__fastcall * GetWindowLongA)(__int64, __int64); // [rsp-6860h] [rbp-6870h]
    _DWORD* v293; // [rsp-6858h] [rbp-6868h]
    __int64 v294; // [rsp-6850h] [rbp-6860h]
    char v295; // [rsp-6848h] [rbp-6858h]
    char v296; // [rsp-6847h] [rbp-6857h]
    __int16 v297; // [rsp-6846h] [rbp-6856h]
    int v298; // [rsp-6844h] [rbp-6854h]
    int v299; // [rsp-6840h] [rbp-6850h]
    int v300; // [rsp-683Ch] [rbp-684Ch]
    int v301; // [rsp-6838h] [rbp-6848h]
    int v302; // [rsp-6834h] [rbp-6844h]
    int v303; // [rsp-6830h] [rbp-6840h]
    BOOL v304; // [rsp-682Ch] [rbp-683Ch]
    int v305; // [rsp-6828h] [rbp-6838h]
    int v306; // [rsp-6824h] [rbp-6834h]
    int v307; // [rsp-6820h] [rbp-6830h]
    BOOL v308; // [rsp-681Ch] [rbp-682Ch]
    int v309; // [rsp-6818h] [rbp-6828h]
    int v310; // [rsp-6814h] [rbp-6824h]
    int v311; // [rsp-6810h] [rbp-6820h]
    int v312; // [rsp-680Ch] [rbp-681Ch]
    int v313; // [rsp-6808h] [rbp-6818h]
    int v314; // [rsp-6804h] [rbp-6814h]
    unsigned int v315; // [rsp-6800h] [rbp-6810h]
    BOOL v316; // [rsp-67FCh] [rbp-680Ch]
    int v317; // [rsp-67F8h] [rbp-6808h]
    BOOL v318; // [rsp-67F4h] [rbp-6804h]
    BOOL v319; // [rsp-67F0h] [rbp-6800h]
    int v320; // [rsp-67ECh] [rbp-67FCh]
    BOOL v321; // [rsp-67E8h] [rbp-67F8h]
    unsigned int v322; // [rsp-67E4h] [rbp-67F4h]
    BOOL v323; // [rsp-67E0h] [rbp-67F0h]
    int v324; // [rsp-67DCh] [rbp-67ECh]
    int v325; // [rsp-67D8h] [rbp-67E8h]
    __int64 v326; // [rsp-67D0h] [rbp-67E0h]
    __int64 v327; // [rsp-67C8h] [rbp-67D8h]
    unsigned int(__fastcall * GetFileAttributesExA)(__int64*, _QWORD, __int64*); // [rsp-67C0h] [rbp-67D0h]
    int v329; // [rsp-67B8h] [rbp-67C8h]
    BOOL v330; // [rsp-67B4h] [rbp-67C4h]
    __int64 v331; // [rsp-67B0h] [rbp-67C0h]
    int v332; // [rsp-67A8h] [rbp-67B8h]
    int v333; // [rsp-67A4h] [rbp-67B4h]
    __int64 IsBadReadPtr; // [rsp-67A0h] [rbp-67B0h]
    __int64 i5; // [rsp-6798h] [rbp-67A8h]
    __int64 v336; // [rsp-6790h] [rbp-67A0h]
    unsigned __int64 v337; // [rsp-6788h] [rbp-6798h]
    unsigned __int64 v338; // [rsp-6770h] [rbp-6780h]
    int v339; // [rsp-6768h] [rbp-6778h]
    int v340; // [rsp-6764h] [rbp-6774h]
    int v341; // [rsp-6760h] [rbp-6770h]
    char v342; // [rsp-6758h] [rbp-6768h]
    char v343; // [rsp-6757h] [rbp-6767h]
    int v344; // [rsp-6756h] [rbp-6766h]
    char v345; // [rsp-6750h] [rbp-6760h]
    char v346; // [rsp-674Fh] [rbp-675Fh]
    int v347; // [rsp-674Eh] [rbp-675Eh]
    char v348; // [rsp-6748h] [rbp-6758h]
    char v349; // [rsp-6747h] [rbp-6757h]
    int v350; // [rsp-6746h] [rbp-6756h]
    char v351; // [rsp-6740h] [rbp-6750h]
    char v352; // [rsp-673Fh] [rbp-674Fh]
    int v353; // [rsp-673Eh] [rbp-674Eh]
    char v354; // [rsp-6738h] [rbp-6748h]
    char v355; // [rsp-6737h] [rbp-6747h]
    int v356; // [rsp-6736h] [rbp-6746h]
    char v357; // [rsp-6730h] [rbp-6740h]
    char v358; // [rsp-672Fh] [rbp-673Fh]
    unsigned int v359; // [rsp-672Eh] [rbp-673Eh]
    char v360; // [rsp-6728h] [rbp-6738h]
    char v361; // [rsp-6727h] [rbp-6737h]
    int v362; // [rsp-6726h] [rbp-6736h]
    char v363; // [rsp-6720h] [rbp-6730h]
    char v364; // [rsp-671Fh] [rbp-672Fh]
    __int16 v365; // [rsp-671Eh] [rbp-672Eh]
    int v366; // [rsp-671Ch] [rbp-672Ch]
    __int64 v367; // [rsp-6718h] [rbp-6728h]
    char v368; // [rsp-6710h] [rbp-6720h]
    char v369; // [rsp-670Fh] [rbp-671Fh]
    __int16 v370; // [rsp-670Eh] [rbp-671Eh]
    int v371; // [rsp-670Ch] [rbp-671Ch]
    char v372; // [rsp-6708h] [rbp-6718h]
    char v373; // [rsp-6707h] [rbp-6717h]
    __int16 v374; // [rsp-6706h] [rbp-6716h]
    int v375; // [rsp-6704h] [rbp-6714h]
    char v376; // [rsp-6700h] [rbp-6710h]
    char v377; // [rsp-66FFh] [rbp-670Fh]
    __int16 v378; // [rsp-66FEh] [rbp-670Eh]
    int v379; // [rsp-66FCh] [rbp-670Ch]
    __int64 v380; // [rsp-66F8h] [rbp-6708h]
    _QWORD* v381; // [rsp-66F0h] [rbp-6700h]
    __int64 v382; // [rsp-66E8h] [rbp-66F8h]
    unsigned __int64 v383; // [rsp-66E0h] [rbp-66F0h]
    __int64 v384; // [rsp-66D8h] [rbp-66E8h]
    __int64 v385; // [rsp-66D0h] [rbp-66E0h]
    char v386; // [rsp-66C8h] [rbp-66D8h]
    char v387; // [rsp-66C7h] [rbp-66D7h]
    __int16 v388; // [rsp-66C6h] [rbp-66D6h]
    int v389; // [rsp-66C4h] [rbp-66D4h]
    unsigned int(__fastcall * v390)(__int64, _QWORD, __int64*, unsigned int*); // [rsp-66C0h] [rbp-66D0h]
    __int64(__fastcall * NtQuerySystemInformation)(__int64, unsigned int*, __int64, unsigned int*); // [rsp-66B8h] [rbp-66C8h]
    char v392; // [rsp-66B0h] [rbp-66C0h]
    char v393; // [rsp-66AFh] [rbp-66BFh]
    __int16 v394; // [rsp-66AEh] [rbp-66BEh]
    int v395; // [rsp-66ACh] [rbp-66BCh]
    char v396; // [rsp-66A8h] [rbp-66B8h]
    char v397; // [rsp-66A7h] [rbp-66B7h]
    __int16 v398; // [rsp-66A6h] [rbp-66B6h]
    int v399; // [rsp-66A4h] [rbp-66B4h]
    char v400; // [rsp-66A0h] [rbp-66B0h]
    char v401; // [rsp-669Fh] [rbp-66AFh]
    __int16 v402; // [rsp-669Eh] [rbp-66AEh]
    int v403; // [rsp-669Ch] [rbp-66ACh]
    __int64 v404; // [rsp-6698h] [rbp-66A8h]
    __int64 v405; // [rsp-6690h] [rbp-66A0h]
    unsigned __int64 v406; // [rsp-6688h] [rbp-6698h]
    char v407; // [rsp-6680h] [rbp-6690h]
    char v408; // [rsp-667Fh] [rbp-668Fh]
    __int16 v409; // [rsp-667Eh] [rbp-668Eh]
    int v410; // [rsp-667Ch] [rbp-668Ch]
    char v411; // [rsp-6678h] [rbp-6688h]
    char v412; // [rsp-6677h] [rbp-6687h]
    __int16 v413; // [rsp-6676h] [rbp-6686h]
    int v414; // [rsp-6674h] [rbp-6684h]
    char v415; // [rsp-6670h] [rbp-6680h]
    char v416; // [rsp-666Fh] [rbp-667Fh]
    __int16 v417; // [rsp-666Eh] [rbp-667Eh]
    int v418; // [rsp-666Ch] [rbp-667Ch]
    void(__fastcall * Sleep)(__int64); // [rsp-6668h] [rbp-6678h]
    char v420; // [rsp-6660h] [rbp-6670h]
    char v421; // [rsp-665Fh] [rbp-666Fh]
    __int16 v422; // [rsp-665Eh] [rbp-666Eh]
    int v423; // [rsp-665Ch] [rbp-666Ch]
    char v424; // [rsp-6658h] [rbp-6668h]
    char v425; // [rsp-6657h] [rbp-6667h]
    __int16 v426; // [rsp-6656h] [rbp-6666h]
    int v427; // [rsp-6654h] [rbp-6664h]
    unsigned int* v428; // [rsp-6650h] [rbp-6660h]
    _DWORD* v429; // [rsp-6648h] [rbp-6658h]
    unsigned int v430; // [rsp-6640h] [rbp-6650h]
    unsigned int v431; // [rsp-6638h] [rbp-6648h]
    int v432; // [rsp-6634h] [rbp-6644h]
    __int16 v433; // [rsp-6628h] [rbp-6638h]
    int v434; // [rsp-6624h] [rbp-6634h]
    char v435; // [rsp-6620h] [rbp-6630h]
    char v436; // [rsp-661Fh] [rbp-662Fh]
    char v437; // [rsp-661Eh] [rbp-662Eh]
    char v438; // [rsp-661Dh] [rbp-662Dh]
    char v439; // [rsp-661Ch] [rbp-662Ch]
    char v440; // [rsp-661Bh] [rbp-662Bh]
    char v441; // [rsp-661Ah] [rbp-662Ah]
    char v442; // [rsp-6619h] [rbp-6629h]
    char v443; // [rsp-6618h] [rbp-6628h]
    char v444; // [rsp-6617h] [rbp-6627h]
    char v445; // [rsp-6616h] [rbp-6626h]
    char v446; // [rsp-6615h] [rbp-6625h]
    char v447; // [rsp-6614h] [rbp-6624h]
    char v448; // [rsp-6613h] [rbp-6623h]
    char v449; // [rsp-6612h] [rbp-6622h]
    char v450; // [rsp-6611h] [rbp-6621h]
    char v451; // [rsp-6610h] [rbp-6620h]
    char v452; // [rsp-660Fh] [rbp-661Fh]
    _BYTE v453[6]; // [rsp-660Eh] [rbp-661Eh]
    __int16 v454; // [rsp-6600h] [rbp-6610h]
    int v455; // [rsp-65FCh] [rbp-660Ch]
    char v456; // [rsp-65F8h] [rbp-6608h]
    char v457; // [rsp-65F7h] [rbp-6607h]
    char v458; // [rsp-65F6h] [rbp-6606h]
    char v459; // [rsp-65F5h] [rbp-6605h]
    char v460; // [rsp-65F4h] [rbp-6604h]
    char v461; // [rsp-65F3h] [rbp-6603h]
    char v462; // [rsp-65F2h] [rbp-6602h]
    char v463; // [rsp-65F1h] [rbp-6601h]
    char v464; // [rsp-65F0h] [rbp-6600h]
    char v465; // [rsp-65EFh] [rbp-65FFh]
    char v466; // [rsp-65EEh] [rbp-65FEh]
    char v467; // [rsp-65EDh] [rbp-65FDh]
    char v468; // [rsp-65ECh] [rbp-65FCh]
    char v469; // [rsp-65EBh] [rbp-65FBh]
    char v470; // [rsp-65EAh] [rbp-65FAh]
    char v471; // [rsp-65E9h] [rbp-65F9h]
    char v472; // [rsp-65E8h] [rbp-65F8h]
    char v473; // [rsp-65E7h] [rbp-65F7h]
    char v474; // [rsp-65E6h] [rbp-65F6h]
    char v475; // [rsp-65E5h] [rbp-65F5h]
    char v476; // [rsp-65E4h] [rbp-65F4h]
    char v477; // [rsp-65E3h] [rbp-65F3h]
    char v478; // [rsp-65E2h] [rbp-65F2h]
    char v479; // [rsp-65E1h] [rbp-65F1h]
    char v480; // [rsp-65E0h] [rbp-65F0h]
    char v481; // [rsp-65DFh] [rbp-65EFh]
    char v482; // [rsp-65DEh] [rbp-65EEh]
    char v483; // [rsp-65DDh] [rbp-65EDh]
    char v484; // [rsp-65DCh] [rbp-65ECh]
    _BYTE v485[3]; // [rsp-65DBh] [rbp-65EBh]
    __int16 v486; // [rsp-65D8h] [rbp-65E8h]
    int v487; // [rsp-65D4h] [rbp-65E4h]
    char v488; // [rsp-65D0h] [rbp-65E0h]
    char v489; // [rsp-65CFh] [rbp-65DFh]
    char v490; // [rsp-65CEh] [rbp-65DEh]
    char v491; // [rsp-65CDh] [rbp-65DDh]
    char v492; // [rsp-65CCh] [rbp-65DCh]
    char v493; // [rsp-65CBh] [rbp-65DBh]
    char v494; // [rsp-65CAh] [rbp-65DAh]
    char v495; // [rsp-65C9h] [rbp-65D9h]
    char v496; // [rsp-65C8h] [rbp-65D8h]
    char v497; // [rsp-65C7h] [rbp-65D7h]
    char v498; // [rsp-65C6h] [rbp-65D6h]
    char v499; // [rsp-65C5h] [rbp-65D5h]
    char v500; // [rsp-65C4h] [rbp-65D4h]
    char v501; // [rsp-65C3h] [rbp-65D3h]
    char v502; // [rsp-65C2h] [rbp-65D2h]
    char v503; // [rsp-65C1h] [rbp-65D1h]
    char v504; // [rsp-65C0h] [rbp-65D0h]
    char v505; // [rsp-65BFh] [rbp-65CFh]
    char v506; // [rsp-65BEh] [rbp-65CEh]
    char v507; // [rsp-65BDh] [rbp-65CDh]
    char v508; // [rsp-65BCh] [rbp-65CCh]
    char v509; // [rsp-65BBh] [rbp-65CBh]
    __int16 v510; // [rsp-65BAh] [rbp-65CAh]
    __int16 v511; // [rsp-65B0h] [rbp-65C0h]
    int v512; // [rsp-65ACh] [rbp-65BCh]
    char v513; // [rsp-65A8h] [rbp-65B8h]
    char v514; // [rsp-65A7h] [rbp-65B7h]
    char v515; // [rsp-65A6h] [rbp-65B6h]
    char v516; // [rsp-65A5h] [rbp-65B5h]
    char v517; // [rsp-65A4h] [rbp-65B4h]
    char v518; // [rsp-65A3h] [rbp-65B3h]
    char v519; // [rsp-65A2h] [rbp-65B2h]
    char v520; // [rsp-65A1h] [rbp-65B1h]
    char v521; // [rsp-65A0h] [rbp-65B0h]
    char v522; // [rsp-659Fh] [rbp-65AFh]
    char v523; // [rsp-659Eh] [rbp-65AEh]
    char v524; // [rsp-659Dh] [rbp-65ADh]
    char v525; // [rsp-659Ch] [rbp-65ACh]
    char v526; // [rsp-659Bh] [rbp-65ABh]
    char v527; // [rsp-659Ah] [rbp-65AAh]
    char v528; // [rsp-6599h] [rbp-65A9h]
    char v529; // [rsp-6598h] [rbp-65A8h]
    char v530; // [rsp-6597h] [rbp-65A7h]
    char v531; // [rsp-6596h] [rbp-65A6h]
    char v532; // [rsp-6595h] [rbp-65A5h]
    char v533; // [rsp-6594h] [rbp-65A4h]
    char v534; // [rsp-6593h] [rbp-65A3h]
    char v535; // [rsp-6592h] [rbp-65A2h]
    char v536; // [rsp-6591h] [rbp-65A1h]
    char v537; // [rsp-6590h] [rbp-65A0h]
    char v538; // [rsp-658Fh] [rbp-659Fh]
    char v539; // [rsp-658Eh] [rbp-659Eh]
    char v540; // [rsp-658Dh] [rbp-659Dh]
    char v541; // [rsp-658Ch] [rbp-659Ch]
    char v542; // [rsp-658Bh] [rbp-659Bh]
    char v543; // [rsp-658Ah] [rbp-659Ah]
    char v544; // [rsp-6589h] [rbp-6599h]
    __int16 v545; // [rsp-6588h] [rbp-6598h]
    int v546; // [rsp-6584h] [rbp-6594h]
    char v547; // [rsp-6580h] [rbp-6590h]
    char v548; // [rsp-657Fh] [rbp-658Fh]
    char v549; // [rsp-657Eh] [rbp-658Eh]
    char v550; // [rsp-657Dh] [rbp-658Dh]
    char v551; // [rsp-657Ch] [rbp-658Ch]
    char v552; // [rsp-657Bh] [rbp-658Bh]
    char v553; // [rsp-657Ah] [rbp-658Ah]
    char v554; // [rsp-6579h] [rbp-6589h]
    char v555; // [rsp-6578h] [rbp-6588h]
    char v556; // [rsp-6577h] [rbp-6587h]
    char v557; // [rsp-6576h] [rbp-6586h]
    char v558; // [rsp-6575h] [rbp-6585h]
    char v559; // [rsp-6574h] [rbp-6584h]
    char v560; // [rsp-6573h] [rbp-6583h]
    char v561; // [rsp-6572h] [rbp-6582h]
    char v562; // [rsp-6571h] [rbp-6581h]
    __int16 v563; // [rsp-6560h] [rbp-6570h]
    int v564; // [rsp-655Ch] [rbp-656Ch]
    char v565; // [rsp-6558h] [rbp-6568h]
    char v566; // [rsp-6557h] [rbp-6567h]
    char v567; // [rsp-6556h] [rbp-6566h]
    char v568; // [rsp-6555h] [rbp-6565h]
    char v569; // [rsp-6554h] [rbp-6564h]
    char v570; // [rsp-6553h] [rbp-6563h]
    char v571; // [rsp-6552h] [rbp-6562h]
    char v572; // [rsp-6551h] [rbp-6561h]
    char v573; // [rsp-6550h] [rbp-6560h]
    char v574; // [rsp-654Fh] [rbp-655Fh]
    char v575; // [rsp-654Eh] [rbp-655Eh]
    char v576; // [rsp-654Dh] [rbp-655Dh]
    char v577; // [rsp-654Ch] [rbp-655Ch]
    char v578; // [rsp-654Bh] [rbp-655Bh]
    char v579; // [rsp-654Ah] [rbp-655Ah]
    char v580; // [rsp-6549h] [rbp-6559h]
    char v581; // [rsp-6548h] [rbp-6558h]
    char v582; // [rsp-6547h] [rbp-6557h]
    char v583; // [rsp-6546h] [rbp-6556h]
    char v584; // [rsp-6545h] [rbp-6555h]
    char v585; // [rsp-6544h] [rbp-6554h]
    char v586; // [rsp-6543h] [rbp-6553h]
    char v587; // [rsp-6542h] [rbp-6552h]
    char v588; // [rsp-6541h] [rbp-6551h]
    char v589; // [rsp-6540h] [rbp-6550h]
    char v590; // [rsp-653Fh] [rbp-654Fh]
    char v591; // [rsp-653Eh] [rbp-654Eh]
    char v592; // [rsp-653Dh] [rbp-654Dh]
    char v593; // [rsp-653Ch] [rbp-654Ch]
    char v594; // [rsp-653Bh] [rbp-654Bh]
    char v595; // [rsp-653Ah] [rbp-654Ah]
    char v596; // [rsp-6539h] [rbp-6549h]
    __int16 v597; // [rsp-6538h] [rbp-6548h]
    int v598; // [rsp-6534h] [rbp-6544h]
    char v599; // [rsp-6530h] [rbp-6540h]
    char v600; // [rsp-652Fh] [rbp-653Fh]
    char v601; // [rsp-652Eh] [rbp-653Eh]
    char v602; // [rsp-652Dh] [rbp-653Dh]
    char v603; // [rsp-652Ch] [rbp-653Ch]
    char v604; // [rsp-652Bh] [rbp-653Bh]
    char v605; // [rsp-652Ah] [rbp-653Ah]
    char v606; // [rsp-6529h] [rbp-6539h]
    char v607; // [rsp-6528h] [rbp-6538h]
    char v608; // [rsp-6527h] [rbp-6537h]
    char v609; // [rsp-6526h] [rbp-6536h]
    char v610; // [rsp-6525h] [rbp-6535h]
    int v611; // [rsp-6524h] [rbp-6534h]
    __int16 v612; // [rsp-6510h] [rbp-6520h]
    int v613; // [rsp-650Ch] [rbp-651Ch]
    char v614; // [rsp-6508h] [rbp-6518h]
    char v615; // [rsp-6507h] [rbp-6517h]
    char v616; // [rsp-6506h] [rbp-6516h]
    char v617; // [rsp-6505h] [rbp-6515h]
    char v618; // [rsp-6504h] [rbp-6514h]
    char v619; // [rsp-6503h] [rbp-6513h]
    char v620; // [rsp-6502h] [rbp-6512h]
    char v621; // [rsp-6501h] [rbp-6511h]
    char v622; // [rsp-6500h] [rbp-6510h]
    char v623; // [rsp-64FFh] [rbp-650Fh]
    char v624; // [rsp-64FEh] [rbp-650Eh]
    char v625; // [rsp-64FDh] [rbp-650Dh]
    char v626; // [rsp-64FCh] [rbp-650Ch]
    char v627; // [rsp-64FBh] [rbp-650Bh]
    char v628; // [rsp-64FAh] [rbp-650Ah]
    char v629; // [rsp-64F9h] [rbp-6509h]
    __int64 v630; // [rsp-64F8h] [rbp-6508h]
    __int16 v631; // [rsp-64E8h] [rbp-64F8h]
    int v632; // [rsp-64E4h] [rbp-64F4h]
    char v633; // [rsp-64E0h] [rbp-64F0h]
    char v634; // [rsp-64DFh] [rbp-64EFh]
    char v635; // [rsp-64DEh] [rbp-64EEh]
    char v636; // [rsp-64DDh] [rbp-64EDh]
    char v637; // [rsp-64DCh] [rbp-64ECh]
    char v638; // [rsp-64DBh] [rbp-64EBh]
    char v639; // [rsp-64DAh] [rbp-64EAh]
    char v640; // [rsp-64D9h] [rbp-64E9h]
    char v641; // [rsp-64D8h] [rbp-64E8h]
    char v642; // [rsp-64D7h] [rbp-64E7h]
    char v643; // [rsp-64D6h] [rbp-64E6h]
    char v644; // [rsp-64D5h] [rbp-64E5h]
    char v645; // [rsp-64D4h] [rbp-64E4h]
    char v646; // [rsp-64D3h] [rbp-64E3h]
    char v647; // [rsp-64D2h] [rbp-64E2h]
    char v648; // [rsp-64D1h] [rbp-64E1h]
    char v649; // [rsp-64D0h] [rbp-64E0h]
    char v650; // [rsp-64CFh] [rbp-64DFh]
    char v651; // [rsp-64CEh] [rbp-64DEh]
    char v652; // [rsp-64CDh] [rbp-64DDh]
    char v653; // [rsp-64CCh] [rbp-64DCh]
    char v654; // [rsp-64CBh] [rbp-64DBh]
    char v655; // [rsp-64CAh] [rbp-64DAh]
    char v656; // [rsp-64C9h] [rbp-64D9h]
    char v657; // [rsp-64C8h] [rbp-64D8h]
    char v658; // [rsp-64C7h] [rbp-64D7h]
    char v659; // [rsp-64C6h] [rbp-64D6h]
    char v660; // [rsp-64C5h] [rbp-64D5h]
    char v661; // [rsp-64C4h] [rbp-64D4h]
    char v662; // [rsp-64C3h] [rbp-64D3h]
    char v663; // [rsp-64C2h] [rbp-64D2h]
    char v664; // [rsp-64C1h] [rbp-64D1h]
    __int16 v665; // [rsp-64C0h] [rbp-64D0h]
    int v666; // [rsp-64BCh] [rbp-64CCh]
    char v667; // [rsp-64B8h] [rbp-64C8h]
    char v668; // [rsp-64B7h] [rbp-64C7h]
    char v669; // [rsp-64B6h] [rbp-64C6h]
    char v670; // [rsp-64B5h] [rbp-64C5h]
    char v671; // [rsp-64B4h] [rbp-64C4h]
    char v672; // [rsp-64B3h] [rbp-64C3h]
    char v673; // [rsp-64B2h] [rbp-64C2h]
    char v674; // [rsp-64B1h] [rbp-64C1h]
    char v675; // [rsp-64B0h] [rbp-64C0h]
    char v676; // [rsp-64AFh] [rbp-64BFh]
    char v677; // [rsp-64AEh] [rbp-64BEh]
    char v678; // [rsp-64ADh] [rbp-64BDh]
    char v679; // [rsp-64ACh] [rbp-64BCh]
    char v680; // [rsp-64ABh] [rbp-64BBh]
    char v681; // [rsp-64AAh] [rbp-64BAh]
    char v682; // [rsp-64A9h] [rbp-64B9h]
    char v683; // [rsp-64A8h] [rbp-64B8h]
    char v684; // [rsp-64A7h] [rbp-64B7h]
    char v685; // [rsp-64A6h] [rbp-64B6h]
    char v686; // [rsp-64A5h] [rbp-64B5h]
    char v687; // [rsp-64A4h] [rbp-64B4h]
    char v688; // [rsp-64A3h] [rbp-64B3h]
    char v689; // [rsp-64A2h] [rbp-64B2h]
    char v690; // [rsp-64A1h] [rbp-64B1h]
    char v691; // [rsp-64A0h] [rbp-64B0h]
    char v692; // [rsp-649Fh] [rbp-64AFh]
    char v693; // [rsp-649Eh] [rbp-64AEh]
    char v694; // [rsp-649Dh] [rbp-64ADh]
    char v695; // [rsp-649Ch] [rbp-64ACh]
    char v696; // [rsp-649Bh] [rbp-64ABh]
    char v697; // [rsp-649Ah] [rbp-64AAh]
    char v698; // [rsp-6499h] [rbp-64A9h]
    __int16 v699; // [rsp-6498h] [rbp-64A8h]
    int v700; // [rsp-6494h] [rbp-64A4h]
    char v701; // [rsp-6490h] [rbp-64A0h]
    char v702; // [rsp-648Fh] [rbp-649Fh]
    char v703; // [rsp-648Eh] [rbp-649Eh]
    char v704; // [rsp-648Dh] [rbp-649Dh]
    char v705; // [rsp-648Ch] [rbp-649Ch]
    char v706; // [rsp-648Bh] [rbp-649Bh]
    char v707; // [rsp-648Ah] [rbp-649Ah]
    char v708; // [rsp-6489h] [rbp-6499h]
    char v709; // [rsp-6488h] [rbp-6498h]
    char v710; // [rsp-6487h] [rbp-6497h]
    char v711; // [rsp-6486h] [rbp-6496h]
    char v712; // [rsp-6485h] [rbp-6495h]
    char v713; // [rsp-6484h] [rbp-6494h]
    char v714; // [rsp-6483h] [rbp-6493h]
    char v715; // [rsp-6482h] [rbp-6492h]
    char v716; // [rsp-6481h] [rbp-6491h]
    __int64 v717; // [rsp-6480h] [rbp-6490h]
    __int16 v718; // [rsp-6470h] [rbp-6480h]
    int v719; // [rsp-646Ch] [rbp-647Ch]
    char v720; // [rsp-6468h] [rbp-6478h]
    char v721; // [rsp-6467h] [rbp-6477h]
    char v722; // [rsp-6466h] [rbp-6476h]
    char v723; // [rsp-6465h] [rbp-6475h]
    char v724; // [rsp-6464h] [rbp-6474h]
    char v725; // [rsp-6463h] [rbp-6473h]
    char v726; // [rsp-6462h] [rbp-6472h]
    char v727; // [rsp-6461h] [rbp-6471h]
    char v728; // [rsp-6460h] [rbp-6470h]
    char v729; // [rsp-645Fh] [rbp-646Fh]
    char v730; // [rsp-645Eh] [rbp-646Eh]
    char v731; // [rsp-645Dh] [rbp-646Dh]
    char v732; // [rsp-645Ch] [rbp-646Ch]
    char v733; // [rsp-645Bh] [rbp-646Bh]
    char v734; // [rsp-645Ah] [rbp-646Ah]
    char v735; // [rsp-6459h] [rbp-6469h]
    char v736; // [rsp-6458h] [rbp-6468h]
    char v737; // [rsp-6457h] [rbp-6467h]
    char v738; // [rsp-6456h] [rbp-6466h]
    char v739; // [rsp-6455h] [rbp-6465h]
    int v740; // [rsp-6454h] [rbp-6464h]
    __int16 v741; // [rsp-6448h] [rbp-6458h]
    int v742; // [rsp-6444h] [rbp-6454h]
    char v743; // [rsp-6440h] [rbp-6450h]
    char v744; // [rsp-643Fh] [rbp-644Fh]
    char v745; // [rsp-643Eh] [rbp-644Eh]
    char v746; // [rsp-643Dh] [rbp-644Dh]
    char v747; // [rsp-643Ch] [rbp-644Ch]
    char v748; // [rsp-643Bh] [rbp-644Bh]
    char v749; // [rsp-643Ah] [rbp-644Ah]
    char v750; // [rsp-6439h] [rbp-6449h]
    char v751; // [rsp-6438h] [rbp-6448h]
    char v752; // [rsp-6437h] [rbp-6447h]
    char v753; // [rsp-6436h] [rbp-6446h]
    char v754; // [rsp-6435h] [rbp-6445h]
    char v755; // [rsp-6434h] [rbp-6444h]
    char v756; // [rsp-6433h] [rbp-6443h]
    __int16 v757; // [rsp-6432h] [rbp-6442h]
    __int16 v758; // [rsp-6420h] [rbp-6430h]
    int v759; // [rsp-641Ch] [rbp-642Ch]
    char v760; // [rsp-6418h] [rbp-6428h]
    char v761; // [rsp-6417h] [rbp-6427h]
    char v762; // [rsp-6416h] [rbp-6426h]
    char v763; // [rsp-6415h] [rbp-6425h]
    char v764; // [rsp-6414h] [rbp-6424h]
    char v765; // [rsp-6413h] [rbp-6423h]
    char v766; // [rsp-6412h] [rbp-6422h]
    char v767; // [rsp-6411h] [rbp-6421h]
    char v768; // [rsp-6410h] [rbp-6420h]
    char v769; // [rsp-640Fh] [rbp-641Fh]
    char v770; // [rsp-640Eh] [rbp-641Eh]
    char v771; // [rsp-640Dh] [rbp-641Dh]
    char v772; // [rsp-640Ch] [rbp-641Ch]
    char v773; // [rsp-640Bh] [rbp-641Bh]
    __int16 v774; // [rsp-640Ah] [rbp-641Ah]
    __int16 v775; // [rsp-63F8h] [rbp-6408h]
    int v776; // [rsp-63F4h] [rbp-6404h]
    char v777; // [rsp-63F0h] [rbp-6400h]
    char v778; // [rsp-63EFh] [rbp-63FFh]
    char v779; // [rsp-63EEh] [rbp-63FEh]
    char v780; // [rsp-63EDh] [rbp-63FDh]
    char v781; // [rsp-63ECh] [rbp-63FCh]
    char v782; // [rsp-63EBh] [rbp-63FBh]
    char v783; // [rsp-63EAh] [rbp-63FAh]
    char v784; // [rsp-63E9h] [rbp-63F9h]
    char v785; // [rsp-63E8h] [rbp-63F8h]
    char v786; // [rsp-63E7h] [rbp-63F7h]
    char v787; // [rsp-63E6h] [rbp-63F6h]
    char v788; // [rsp-63E5h] [rbp-63F5h]
    char v789; // [rsp-63E4h] [rbp-63F4h]
    char v790; // [rsp-63E3h] [rbp-63F3h]
    char v791; // [rsp-63E2h] [rbp-63F2h]
    char v792; // [rsp-63E1h] [rbp-63F1h]
    char v793; // [rsp-63E0h] [rbp-63F0h]
    char v794; // [rsp-63DFh] [rbp-63EFh]
    char v795; // [rsp-63DEh] [rbp-63EEh]
    char v796; // [rsp-63DDh] [rbp-63EDh]
    char v797; // [rsp-63DCh] [rbp-63ECh]
    char v798; // [rsp-63DBh] [rbp-63EBh]
    char v799; // [rsp-63DAh] [rbp-63EAh]
    char v800; // [rsp-63D9h] [rbp-63E9h]
    char v801; // [rsp-63D8h] [rbp-63E8h]
    char v802; // [rsp-63D7h] [rbp-63E7h]
    char v803; // [rsp-63D6h] [rbp-63E6h]
    char v804; // [rsp-63D5h] [rbp-63E5h]
    char v805; // [rsp-63D4h] [rbp-63E4h]
    char v806; // [rsp-63D3h] [rbp-63E3h]
    char v807; // [rsp-63D2h] [rbp-63E2h]
    char v808; // [rsp-63D1h] [rbp-63E1h]
    __int16 v809; // [rsp-63D0h] [rbp-63E0h]
    int v810; // [rsp-63CCh] [rbp-63DCh]
    char v811; // [rsp-63C8h] [rbp-63D8h]
    char v812; // [rsp-63C7h] [rbp-63D7h]
    _BYTE v813[6]; // [rsp-63C6h] [rbp-63D6h]
    __int16 v814; // [rsp-63A8h] [rbp-63B8h]
    int v815; // [rsp-63A4h] [rbp-63B4h]
    char v816; // [rsp-63A0h] [rbp-63B0h]
    char v817; // [rsp-639Fh] [rbp-63AFh]
    _BYTE v818[6]; // [rsp-639Eh] [rbp-63AEh]
    __int16 v819; // [rsp-6380h] [rbp-6390h]
    int v820; // [rsp-637Ch] [rbp-638Ch]
    char v821; // [rsp-6378h] [rbp-6388h]
    char v822; // [rsp-6377h] [rbp-6387h]
    _BYTE v823[6]; // [rsp-6376h] [rbp-6386h]
    __int16 v824; // [rsp-6358h] [rbp-6368h]
    int v825; // [rsp-6354h] [rbp-6364h]
    char v826; // [rsp-6350h] [rbp-6360h]
    char v827; // [rsp-634Fh] [rbp-635Fh]
    char v828; // [rsp-634Eh] [rbp-635Eh]
    char v829; // [rsp-634Dh] [rbp-635Dh]
    char v830; // [rsp-634Ch] [rbp-635Ch]
    char v831; // [rsp-634Bh] [rbp-635Bh]
    char v832; // [rsp-634Ah] [rbp-635Ah]
    char v833; // [rsp-6349h] [rbp-6359h]
    char v834; // [rsp-6348h] [rbp-6358h]
    char v835; // [rsp-6347h] [rbp-6357h]
    char v836; // [rsp-6346h] [rbp-6356h]
    char v837; // [rsp-6345h] [rbp-6355h]
    char v838; // [rsp-6344h] [rbp-6354h]
    char v839; // [rsp-6343h] [rbp-6353h]
    char v840; // [rsp-6342h] [rbp-6352h]
    char v841; // [rsp-6341h] [rbp-6351h]
    char v842; // [rsp-6340h] [rbp-6350h]
    char v843; // [rsp-633Fh] [rbp-634Fh]
    char v844; // [rsp-633Eh] [rbp-634Eh]
    char v845; // [rsp-633Dh] [rbp-634Dh]
    char v846; // [rsp-633Ch] [rbp-634Ch]
    char v847; // [rsp-633Bh] [rbp-634Bh]
    char v848; // [rsp-633Ah] [rbp-634Ah]
    char v849; // [rsp-6339h] [rbp-6349h]
    char v850; // [rsp-6338h] [rbp-6348h]
    _BYTE v851[7]; // [rsp-6337h] [rbp-6347h]
    __int16 v852; // [rsp-6330h] [rbp-6340h]
    int v853; // [rsp-632Ch] [rbp-633Ch]
    char v854; // [rsp-6328h] [rbp-6338h]
    char v855; // [rsp-6327h] [rbp-6337h]
    char v856; // [rsp-6326h] [rbp-6336h]
    char v857; // [rsp-6325h] [rbp-6335h]
    char v858; // [rsp-6324h] [rbp-6334h]
    char v859; // [rsp-6323h] [rbp-6333h]
    char v860; // [rsp-6322h] [rbp-6332h]
    char v861; // [rsp-6321h] [rbp-6331h]
    char v862; // [rsp-6320h] [rbp-6330h]
    char v863; // [rsp-631Fh] [rbp-632Fh]
    _BYTE v864[6]; // [rsp-631Eh] [rbp-632Eh]
    __int16 v865; // [rsp-6308h] [rbp-6318h]
    int v866; // [rsp-6304h] [rbp-6314h]
    char v867; // [rsp-6300h] [rbp-6310h]
    char v868; // [rsp-62FFh] [rbp-630Fh]
    char v869; // [rsp-62FEh] [rbp-630Eh]
    char v870; // [rsp-62FDh] [rbp-630Dh]
    char v871; // [rsp-62FCh] [rbp-630Ch]
    char v872; // [rsp-62FBh] [rbp-630Bh]
    char v873; // [rsp-62FAh] [rbp-630Ah]
    char v874; // [rsp-62F9h] [rbp-6309h]
    char v875; // [rsp-62F8h] [rbp-6308h]
    char v876; // [rsp-62F7h] [rbp-6307h]
    char v877; // [rsp-62F6h] [rbp-6306h]
    _BYTE v878[5]; // [rsp-62F5h] [rbp-6305h]
    __int16 v879; // [rsp-62E0h] [rbp-62F0h]
    int v880; // [rsp-62DCh] [rbp-62ECh]
    char v881; // [rsp-62D8h] [rbp-62E8h]
    char v882; // [rsp-62D7h] [rbp-62E7h]
    char v883; // [rsp-62D6h] [rbp-62E6h]
    char v884; // [rsp-62D5h] [rbp-62E5h]
    char v885; // [rsp-62D4h] [rbp-62E4h]
    char v886; // [rsp-62D3h] [rbp-62E3h]
    char v887; // [rsp-62D2h] [rbp-62E2h]
    char v888; // [rsp-62D1h] [rbp-62E1h]
    char v889; // [rsp-62D0h] [rbp-62E0h]
    char v890; // [rsp-62CFh] [rbp-62DFh]
    char v891; // [rsp-62CEh] [rbp-62DEh]
    char v892; // [rsp-62CDh] [rbp-62DDh]
    char v893; // [rsp-62CCh] [rbp-62DCh]
    char v894; // [rsp-62CBh] [rbp-62DBh]
    char v895; // [rsp-62CAh] [rbp-62DAh]
    char v896; // [rsp-62C9h] [rbp-62D9h]
    char v897; // [rsp-62C8h] [rbp-62D8h]
    char v898; // [rsp-62C7h] [rbp-62D7h]
    char v899; // [rsp-62C6h] [rbp-62D6h]
    char v900; // [rsp-62C5h] [rbp-62D5h]
    char v901; // [rsp-62C4h] [rbp-62D4h]
    char v902; // [rsp-62C3h] [rbp-62D3h]
    char v903; // [rsp-62C2h] [rbp-62D2h]
    char v904; // [rsp-62C1h] [rbp-62D1h]
    char v905; // [rsp-62C0h] [rbp-62D0h]
    char v906; // [rsp-62BFh] [rbp-62CFh]
    char v907; // [rsp-62BEh] [rbp-62CEh]
    char v908; // [rsp-62BDh] [rbp-62CDh]
    char v909; // [rsp-62BCh] [rbp-62CCh]
    char v910; // [rsp-62BBh] [rbp-62CBh]
    char v911; // [rsp-62BAh] [rbp-62CAh]
    char v912; // [rsp-62B9h] [rbp-62C9h]
    __int16 v913; // [rsp-62B8h] [rbp-62C8h]
    int v914; // [rsp-62B4h] [rbp-62C4h]
    char v915; // [rsp-62B0h] [rbp-62C0h]
    char v916; // [rsp-62AFh] [rbp-62BFh]
    char v917; // [rsp-62AEh] [rbp-62BEh]
    char v918; // [rsp-62ADh] [rbp-62BDh]
    char v919; // [rsp-62ACh] [rbp-62BCh]
    char v920; // [rsp-62ABh] [rbp-62BBh]
    char v921; // [rsp-62AAh] [rbp-62BAh]
    char v922; // [rsp-62A9h] [rbp-62B9h]
    char v923; // [rsp-62A8h] [rbp-62B8h]
    char v924; // [rsp-62A7h] [rbp-62B7h]
    char v925; // [rsp-62A6h] [rbp-62B6h]
    char v926; // [rsp-62A5h] [rbp-62B5h]
    char v927; // [rsp-62A4h] [rbp-62B4h]
    char v928; // [rsp-62A3h] [rbp-62B3h]
    char v929; // [rsp-62A2h] [rbp-62B2h]
    char v930; // [rsp-62A1h] [rbp-62B1h]
    char v931; // [rsp-62A0h] [rbp-62B0h]
    char v932; // [rsp-629Fh] [rbp-62AFh]
    char v933; // [rsp-629Eh] [rbp-62AEh]
    char v934; // [rsp-629Dh] [rbp-62ADh]
    char v935; // [rsp-629Ch] [rbp-62ACh]
    char v936; // [rsp-629Bh] [rbp-62ABh]
    char v937; // [rsp-629Ah] [rbp-62AAh]
    char v938; // [rsp-6299h] [rbp-62A9h]
    char v939; // [rsp-6298h] [rbp-62A8h]
    char v940; // [rsp-6297h] [rbp-62A7h]
    char v941; // [rsp-6296h] [rbp-62A6h]
    char v942; // [rsp-6295h] [rbp-62A5h]
    char v943; // [rsp-6294h] [rbp-62A4h]
    char v944; // [rsp-6293h] [rbp-62A3h]
    char v945; // [rsp-6292h] [rbp-62A2h]
    char v946; // [rsp-6291h] [rbp-62A1h]
    __int16 v947; // [rsp-6290h] [rbp-62A0h]
    int v948; // [rsp-628Ch] [rbp-629Ch]
    char v949; // [rsp-6288h] [rbp-6298h]
    char v950; // [rsp-6287h] [rbp-6297h]
    char v951; // [rsp-6286h] [rbp-6296h]
    char v952; // [rsp-6285h] [rbp-6295h]
    char v953; // [rsp-6284h] [rbp-6294h]
    char v954; // [rsp-6283h] [rbp-6293h]
    char v955; // [rsp-6282h] [rbp-6292h]
    char v956; // [rsp-6281h] [rbp-6291h]
    char v957; // [rsp-6280h] [rbp-6290h]
    char v958; // [rsp-627Fh] [rbp-628Fh]
    char v959; // [rsp-627Eh] [rbp-628Eh]
    char v960; // [rsp-627Dh] [rbp-628Dh]
    char v961; // [rsp-627Ch] [rbp-628Ch]
    char v962; // [rsp-627Bh] [rbp-628Bh]
    char v963; // [rsp-627Ah] [rbp-628Ah]
    char v964; // [rsp-6279h] [rbp-6289h]
    char v965; // [rsp-6278h] [rbp-6288h]
    char v966; // [rsp-6277h] [rbp-6287h]
    char v967; // [rsp-6276h] [rbp-6286h]
    char v968; // [rsp-6275h] [rbp-6285h]
    char v969; // [rsp-6274h] [rbp-6284h]
    char v970; // [rsp-6273h] [rbp-6283h]
    char v971; // [rsp-6272h] [rbp-6282h]
    char v972; // [rsp-6271h] [rbp-6281h]
    char v973; // [rsp-6270h] [rbp-6280h]
    char v974; // [rsp-626Fh] [rbp-627Fh]
    char v975; // [rsp-626Eh] [rbp-627Eh]
    char v976; // [rsp-626Dh] [rbp-627Dh]
    char v977; // [rsp-626Ch] [rbp-627Ch]
    char v978; // [rsp-626Bh] [rbp-627Bh]
    char v979; // [rsp-626Ah] [rbp-627Ah]
    char v980; // [rsp-6269h] [rbp-6279h]
    __int16 v981; // [rsp-6268h] [rbp-6278h]
    int v982; // [rsp-6264h] [rbp-6274h]
    char v983; // [rsp-6260h] [rbp-6270h]
    char v984; // [rsp-625Fh] [rbp-626Fh]
    char v985; // [rsp-625Eh] [rbp-626Eh]
    _BYTE v986[5]; // [rsp-625Dh] [rbp-626Dh]
    __int16 v987; // [rsp-6240h] [rbp-6250h]
    int v988; // [rsp-623Ch] [rbp-624Ch]
    char v989; // [rsp-6238h] [rbp-6248h]
    char v990; // [rsp-6237h] [rbp-6247h]
    char v991; // [rsp-6236h] [rbp-6246h]
    char v992; // [rsp-6235h] [rbp-6245h]
    char v993; // [rsp-6234h] [rbp-6244h]
    char v994; // [rsp-6233h] [rbp-6243h]
    char v995; // [rsp-6232h] [rbp-6242h]
    char v996; // [rsp-6231h] [rbp-6241h]
    char v997; // [rsp-6230h] [rbp-6240h]
    char v998; // [rsp-622Fh] [rbp-623Fh]
    char v999; // [rsp-622Eh] [rbp-623Eh]
    char v1000; // [rsp-622Dh] [rbp-623Dh]
    char v1001; // [rsp-622Ch] [rbp-623Ch]
    char v1002; // [rsp-622Bh] [rbp-623Bh]
    char v1003; // [rsp-622Ah] [rbp-623Ah]
    char v1004; // [rsp-6229h] [rbp-6239h]
    char v1005; // [rsp-6228h] [rbp-6238h]
    char v1006; // [rsp-6227h] [rbp-6237h]
    char v1007; // [rsp-6226h] [rbp-6236h]
    char v1008; // [rsp-6225h] [rbp-6235h]
    char v1009; // [rsp-6224h] [rbp-6234h]
    char v1010; // [rsp-6223h] [rbp-6233h]
    char v1011; // [rsp-6222h] [rbp-6232h]
    char v1012; // [rsp-6221h] [rbp-6231h]
    char v1013; // [rsp-6220h] [rbp-6230h]
    char v1014; // [rsp-621Fh] [rbp-622Fh]
    char v1015; // [rsp-621Eh] [rbp-622Eh]
    char v1016; // [rsp-621Dh] [rbp-622Dh]
    char v1017; // [rsp-621Ch] [rbp-622Ch]
    char v1018; // [rsp-621Bh] [rbp-622Bh]
    char v1019; // [rsp-621Ah] [rbp-622Ah]
    char v1020; // [rsp-6219h] [rbp-6229h]
    __int16 v1021; // [rsp-6218h] [rbp-6228h]
    int v1022; // [rsp-6214h] [rbp-6224h]
    char v1023; // [rsp-6210h] [rbp-6220h]
    char v1024; // [rsp-620Fh] [rbp-621Fh]
    char v1025; // [rsp-620Eh] [rbp-621Eh]
    char v1026; // [rsp-620Dh] [rbp-621Dh]
    char v1027; // [rsp-620Ch] [rbp-621Ch]
    char v1028; // [rsp-620Bh] [rbp-621Bh]
    char v1029; // [rsp-620Ah] [rbp-621Ah]
    char v1030; // [rsp-6209h] [rbp-6219h]
    char v1031; // [rsp-6208h] [rbp-6218h]
    char v1032; // [rsp-6207h] [rbp-6217h]
    char v1033; // [rsp-6206h] [rbp-6216h]
    char v1034; // [rsp-6205h] [rbp-6215h]
    char v1035; // [rsp-6204h] [rbp-6214h]
    char v1036; // [rsp-6203h] [rbp-6213h]
    char v1037; // [rsp-6202h] [rbp-6212h]
    char v1038; // [rsp-6201h] [rbp-6211h]
    char v1039; // [rsp-6200h] [rbp-6210h]
    char v1040; // [rsp-61FFh] [rbp-620Fh]
    char v1041; // [rsp-61FEh] [rbp-620Eh]
    char v1042; // [rsp-61FDh] [rbp-620Dh]
    char v1043; // [rsp-61FCh] [rbp-620Ch]
    char v1044; // [rsp-61FBh] [rbp-620Bh]
    char v1045; // [rsp-61FAh] [rbp-620Ah]
    char v1046; // [rsp-61F9h] [rbp-6209h]
    char v1047; // [rsp-61F8h] [rbp-6208h]
    char v1048; // [rsp-61F7h] [rbp-6207h]
    char v1049; // [rsp-61F6h] [rbp-6206h]
    char v1050; // [rsp-61F5h] [rbp-6205h]
    char v1051; // [rsp-61F4h] [rbp-6204h]
    char v1052; // [rsp-61F3h] [rbp-6203h]
    char v1053; // [rsp-61F2h] [rbp-6202h]
    char v1054; // [rsp-61F1h] [rbp-6201h]
    __int16 v1055; // [rsp-61F0h] [rbp-6200h]
    int v1056; // [rsp-61ECh] [rbp-61FCh]
    char v1057; // [rsp-61E8h] [rbp-61F8h]
    char v1058; // [rsp-61E7h] [rbp-61F7h]
    char v1059; // [rsp-61E6h] [rbp-61F6h]
    char v1060; // [rsp-61E5h] [rbp-61F5h]
    char v1061; // [rsp-61E4h] [rbp-61F4h]
    char v1062; // [rsp-61E3h] [rbp-61F3h]
    char v1063; // [rsp-61E2h] [rbp-61F2h]
    char v1064; // [rsp-61E1h] [rbp-61F1h]
    char v1065; // [rsp-61E0h] [rbp-61F0h]
    char v1066; // [rsp-61DFh] [rbp-61EFh]
    char v1067; // [rsp-61DEh] [rbp-61EEh]
    char v1068; // [rsp-61DDh] [rbp-61EDh]
    char v1069; // [rsp-61DCh] [rbp-61ECh]
    char v1070; // [rsp-61DBh] [rbp-61EBh]
    char v1071; // [rsp-61DAh] [rbp-61EAh]
    char v1072; // [rsp-61D9h] [rbp-61E9h]
    char v1073; // [rsp-61D8h] [rbp-61E8h]
    char v1074; // [rsp-61D7h] [rbp-61E7h]
    char v1075; // [rsp-61D6h] [rbp-61E6h]
    char v1076; // [rsp-61D5h] [rbp-61E5h]
    char v1077; // [rsp-61D4h] [rbp-61E4h]
    char v1078; // [rsp-61D3h] [rbp-61E3h]
    char v1079; // [rsp-61D2h] [rbp-61E2h]
    char v1080; // [rsp-61D1h] [rbp-61E1h]
    char v1081; // [rsp-61D0h] [rbp-61E0h]
    char v1082; // [rsp-61CFh] [rbp-61DFh]
    char v1083; // [rsp-61CEh] [rbp-61DEh]
    char v1084; // [rsp-61CDh] [rbp-61DDh]
    char v1085; // [rsp-61CCh] [rbp-61DCh]
    char v1086; // [rsp-61CBh] [rbp-61DBh]
    char v1087; // [rsp-61CAh] [rbp-61DAh]
    char v1088; // [rsp-61C9h] [rbp-61D9h]
    char v1089; // [rsp-61C8h] [rbp-61D8h]
    char v1090; // [rsp-61C7h] [rbp-61D7h]
    __int16 v1091; // [rsp-61C6h] [rbp-61D6h]
    int v1092; // [rsp-61C4h] [rbp-61D4h]
    unsigned __int8 v1093; // [rsp-61C0h] [rbp-61D0h]
    __int16 v1094; // [rsp-61B0h] [rbp-61C0h]
    __int16 v1095; // [rsp-61AEh] [rbp-61BEh]
    __int16 v1096; // [rsp-61ACh] [rbp-61BCh]
    __int16 v1097; // [rsp-61AAh] [rbp-61BAh]
    __int16 v1098; // [rsp-61A8h] [rbp-61B8h]
    __int16 v1099; // [rsp-61A6h] [rbp-61B6h]
    __int16 v1100; // [rsp-61A4h] [rbp-61B4h]
    __int16 v1101; // [rsp-61A2h] [rbp-61B2h]
    int v1102; // [rsp-6198h] [rbp-61A8h]
    char v1103; // [rsp-6194h] [rbp-61A4h]
    char v1104; // [rsp-6193h] [rbp-61A3h]
    char v1105; // [rsp-6192h] [rbp-61A2h]
    char v1106; // [rsp-6191h] [rbp-61A1h]
    char v1107; // [rsp-6190h] [rbp-61A0h]
    char v1108; // [rsp-618Fh] [rbp-619Fh]
    char v1109; // [rsp-618Eh] [rbp-619Eh]
    char v1110; // [rsp-618Dh] [rbp-619Dh]
    int v1111; // [rsp-618Ch] [rbp-619Ch]
    int v1112; // [rsp-617Ch] [rbp-618Ch]
    char v1113; // [rsp-6178h] [rbp-6188h]
    char v1114; // [rsp-6177h] [rbp-6187h]
    char v1115; // [rsp-6176h] [rbp-6186h]
    char v1116; // [rsp-6175h] [rbp-6185h]
    int v1117; // [rsp-6174h] [rbp-6184h]
    int v1118; // [rsp-6160h] [rbp-6170h]
    char v1119; // [rsp-615Ch] [rbp-616Ch]
    char v1120; // [rsp-615Bh] [rbp-616Bh]
    char v1121; // [rsp-615Ah] [rbp-616Ah]
    char v1122; // [rsp-6159h] [rbp-6169h]
    char v1123; // [rsp-6158h] [rbp-6168h]
    char v1124; // [rsp-6157h] [rbp-6167h]
    char v1125; // [rsp-6156h] [rbp-6166h]
    char v1126; // [rsp-6155h] [rbp-6165h]
    char v1127; // [rsp-6154h] [rbp-6164h]
    char v1128; // [rsp-6153h] [rbp-6163h]
    char v1129; // [rsp-6152h] [rbp-6162h]
    char v1130; // [rsp-6151h] [rbp-6161h]
    char v1131; // [rsp-6150h] [rbp-6160h]
    char v1132; // [rsp-614Fh] [rbp-615Fh]
    char v1133; // [rsp-614Eh] [rbp-615Eh]
    char v1134; // [rsp-614Dh] [rbp-615Dh]
    int v1135; // [rsp-614Ch] [rbp-615Ch]
    int v1136; // [rsp-6144h] [rbp-6154h]
    char v1137; // [rsp-6140h] [rbp-6150h]
    char v1138; // [rsp-613Fh] [rbp-614Fh]
    char v1139; // [rsp-613Eh] [rbp-614Eh]
    char v1140; // [rsp-613Dh] [rbp-614Dh]
    char v1141; // [rsp-613Ch] [rbp-614Ch]
    char v1142; // [rsp-613Bh] [rbp-614Bh]
    char v1143; // [rsp-613Ah] [rbp-614Ah]
    char v1144; // [rsp-6139h] [rbp-6149h]
    char v1145; // [rsp-6138h] [rbp-6148h]
    char v1146; // [rsp-6137h] [rbp-6147h]
    char v1147; // [rsp-6136h] [rbp-6146h]
    char v1148; // [rsp-6135h] [rbp-6145h]
    char v1149; // [rsp-6134h] [rbp-6144h]
    char v1150; // [rsp-6133h] [rbp-6143h]
    char v1151; // [rsp-6132h] [rbp-6142h]
    char v1152; // [rsp-6131h] [rbp-6141h]
    char v1153; // [rsp-6130h] [rbp-6140h]
    char v1154; // [rsp-612Fh] [rbp-613Fh]
    char v1155; // [rsp-612Eh] [rbp-613Eh]
    char v1156; // [rsp-612Dh] [rbp-613Dh]
    char v1157; // [rsp-612Ch] [rbp-613Ch]
    char v1158; // [rsp-612Bh] [rbp-613Bh]
    char v1159; // [rsp-612Ah] [rbp-613Ah]
    char v1160; // [rsp-6129h] [rbp-6139h]
    int v1161; // [rsp-6128h] [rbp-6138h]
    char v1162; // [rsp-6124h] [rbp-6134h]
    char v1163; // [rsp-6123h] [rbp-6133h]
    char v1164; // [rsp-6122h] [rbp-6132h]
    char v1165; // [rsp-6121h] [rbp-6131h]
    char v1166; // [rsp-6120h] [rbp-6130h]
    char v1167; // [rsp-611Fh] [rbp-612Fh]
    char v1168; // [rsp-611Eh] [rbp-612Eh]
    char v1169; // [rsp-611Dh] [rbp-612Dh]
    char v1170; // [rsp-611Ch] [rbp-612Ch]
    char v1171; // [rsp-611Bh] [rbp-612Bh]
    __int16 v1172; // [rsp-611Ah] [rbp-612Ah]
    int v1173; // [rsp-610Ch] [rbp-611Ch]
    char v1174; // [rsp-6108h] [rbp-6118h]
    char v1175; // [rsp-6107h] [rbp-6117h]
    char v1176; // [rsp-6106h] [rbp-6116h]
    char v1177; // [rsp-6105h] [rbp-6115h]
    char v1178; // [rsp-6104h] [rbp-6114h]
    char v1179; // [rsp-6103h] [rbp-6113h]
    char v1180; // [rsp-6102h] [rbp-6112h]
    char v1181; // [rsp-6101h] [rbp-6111h]
    __int64 v1182; // [rsp-6100h] [rbp-6110h]
    __int64 v1183; // [rsp-60E8h] [rbp-60F8h]
    int v1184; // [rsp-60E0h] [rbp-60F0h]
    int v1185; // [rsp-60DCh] [rbp-60ECh]
    __int64 v1186; // [rsp-60D8h] [rbp-60E8h]
    int v1187; // [rsp-60D4h] [rbp-60E4h]
    int v1188; // [rsp-60D0h] [rbp-60E0h]
    int v1189; // [rsp-60CCh] [rbp-60DCh]
    int v1190; // [rsp-60C8h] [rbp-60D8h]
    unsigned int v1191; // [rsp-60C4h] [rbp-60D4h]
    __int64 (*GetCurrentProcess)(void); // [rsp-60C0h] [rbp-60D0h]
    __int64 v1193; // [rsp-60B8h] [rbp-60C8h]
    __int64(__fastcall * CreateToolhelp32Shaphot)(__int64, _QWORD); // [rsp-60B0h] [rbp-60C0h]
    unsigned __int64 i4; // [rsp-60A8h] [rbp-60B8h]
    unsigned __int64 i10; // [rsp-60A0h] [rbp-60B0h]
    __int64 v1197; // [rsp-6098h] [rbp-60A8h]
    __int64 v1198; // [rsp-6090h] [rbp-60A0h]
    __int64 v1199; // [rsp-6088h] [rbp-6098h]
    unsigned int(__fastcall * GetProcessTimes_1)(__int64, __int64*, __int64*, __int64*, __int64*); // [rsp-6080h] [rbp-6090h]
    __int64 v1201; // [rsp-6078h] [rbp-6088h]
    __int64 v1202; // [rsp-6070h] [rbp-6080h]
    __int64 GetCurrentThreadId; // [rsp-6068h] [rbp-6078h]
    __int64 hVcruntime140; // [rsp-6060h] [rbp-6070h]
    __int64 v1205; // [rsp-6058h] [rbp-6068h]
    __int64 v1206; // [rsp-6050h] [rbp-6060h]
    __int64 hR6Game; // [rsp-6048h] [rbp-6058h]
    __int64 v1208; // [rsp-6040h] [rbp-6050h]
    _DWORD* v1209; // [rsp-6038h] [rbp-6048h]
    __int64 hBEClient; // [rsp-6030h] [rbp-6040h]
    __int64 v1211; // [rsp-6028h] [rbp-6038h]
    int v1212; // [rsp-6020h] [rbp-6030h]
    int v1213; // [rsp-601Ch] [rbp-602Ch]
    int v1214; // [rsp-6018h] [rbp-6028h]
    __int64 v1215; // [rsp-6010h] [rbp-6020h]
    void(__fastcall * free)(unsigned int*); // [rsp-6008h] [rbp-6018h]
    __int64(__fastcall * CreateFileA)(__int64*, __int64, __int64, _QWORD, int, int, _QWORD); // [rsp-6000h] [rbp-6010h]
    unsigned int(__fastcall * GetFileAttributesExW)(__int64*, _QWORD, __int64*); // [rsp-5FF8h] [rbp-6008h]
    __int64 v1219; // [rsp-5FF0h] [rbp-6000h]
    __int64 v1220; // [rsp-5FE8h] [rbp-5FF8h]
    __int64 v1221; // [rsp-5FE0h] [rbp-5FF0h]
    __int64 v1222; // [rsp-5FD0h] [rbp-5FE0h]
    int v1223; // [rsp-5FC8h] [rbp-5FD8h]
    int v1224; // [rsp-5FC4h] [rbp-5FD4h]
    int v1225; // [rsp-5FC0h] [rbp-5FD0h]
    char v1226; // [rsp-5FB8h] [rbp-5FC8h]
    char v1227; // [rsp-5FB7h] [rbp-5FC7h]
    unsigned __int8 v1228; // [rsp-5FB6h] [rbp-5FC6h]
    unsigned __int64 v1229; // [rsp-5FB5h] [rbp-5FC5h]
    int v1230; // [rsp-5FADh] [rbp-5FBDh]
    int v1231; // [rsp-5FA9h] [rbp-5FB9h]
    _BYTE v1232[5]; // [rsp-5FA5h] [rbp-5FB5h]
    char v1233; // [rsp-5F90h] [rbp-5FA0h]
    char v1234; // [rsp-5F8Fh] [rbp-5F9Fh]
    __int16 v1235; // [rsp-5F8Eh] [rbp-5F9Eh]
    unsigned int v1236; // [rsp-5F8Ch] [rbp-5F9Ch]
    __int16 v1237; // [rsp-5F88h] [rbp-5F98h]
    unsigned int v1238; // [rsp-5F86h] [rbp-5F96h]
    int v1239; // [rsp-5F82h] [rbp-5F92h]
    __int64 v1240; // [rsp-5F78h] [rbp-5F88h]
    __int64 v1241; // [rsp-5F70h] [rbp-5F80h]
    unsigned __int64 kk; // [rsp-5F68h] [rbp-5F78h]
    int(__fastcall * NtQueryInformationProcess_1)(__int64, __int64, __int64*, __int64, _QWORD); // [rsp-5F60h] [rbp-5F70h]
    unsigned __int64 i13; // [rsp-5F58h] [rbp-5F68h]
    __int64 hPsapi; // [rsp-5F50h] [rbp-5F60h]
    unsigned int(__fastcall * GetProcessTimes_2)(__int64, __int64*, __int64*, __int64*, __int64*); // [rsp-5F48h] [rbp-5F58h]
    __int64 (*GetTickCount)(void); // [rsp-5F40h] [rbp-5F50h]
    __int64(__fastcall * LoadLibraryA)(__int64*); // [rsp-5F38h] [rbp-5F48h]
    __int64(__fastcall * malloc)(__int64); // [rsp-5F30h] [rbp-5F40h]
    unsigned int(__fastcall * GetExtendedTcpTable)(unsigned int*, unsigned int*, _QWORD, __int64, int, _DWORD); // [rsp-5F28h] [rbp-5F38h]
    __int64 v1251; // [rsp-5F20h] [rbp-5F30h]
    __int64 v1252; // [rsp-5F18h] [rbp-5F28h]
    __int64 v1253; // [rsp-5F10h] [rbp-5F20h]
    __int64 v1254; // [rsp-5F08h] [rbp-5F18h]
    unsigned __int64 v1255; // [rsp-5F00h] [rbp-5F10h]
    unsigned int(__fastcall * OpenProcessToken)(__int64, __int64, __int64*); // [rsp-5EF8h] [rbp-5F08h]
    unsigned int(__fastcall * LookupPrivilegeValueA)(_QWORD, __int64*, __int64*); // [rsp-5EF0h] [rbp-5F00h]
    __int64 v1258; // [rsp-5EE8h] [rbp-5EF8h]
    void(__fastcall * AdjustTokenPrivileges)(__int64, _QWORD, int*, _QWORD, _QWORD, _QWORD); // [rsp-5EE0h] [rbp-5EF0h]
    __int64 v1260; // [rsp-5ED8h] [rbp-5EE8h]
    __int64 v1261; // [rsp-5ED0h] [rbp-5EE0h]
    __int64 hMmres; // [rsp-5EC8h] [rbp-5ED8h]
    __int64 hMshtml; // [rsp-5EC0h] [rbp-5ED0h]
    unsigned int(__fastcall * memcmp)(__int64*, __int64*, __int64); // [rsp-5EB8h] [rbp-5EC8h]
    void(__fastcall * memcpy)(__int64*, unsigned __int64, __int64); // [rsp-5EB0h] [rbp-5EC0h]
    __int64 v1266; // [rsp-5EA8h] [rbp-5EB8h]
    unsigned __int64 v1267; // [rsp-5EA0h] [rbp-5EB0h]
    unsigned __int64 v1268; // [rsp-5E98h] [rbp-5EA8h]
    void(__fastcall * ClientToScreen)(__int64, __int64*); // [rsp-5E90h] [rbp-5EA0h]
    unsigned int(__fastcall * GetWindowDisplayAffinity)(__int64, char*); // [rsp-5E88h] [rbp-5E98h]
    int(__fastcall * NtQueryInformationProcess)(__int64, __int64, __int64*, __int64, _QWORD); // [rsp-5E80h] [rbp-5E90h]
    unsigned int(__fastcall * QueryProcessCycleTimes)(__int64, __int64*); // [rsp-5E78h] [rbp-5E88h]
    _BYTE v1273[6]; // [rsp-5E6Eh] [rbp-5E7Eh]
    char v1274; // [rsp-5E68h] [rbp-5E78h]
    char v1275; // [rsp-5E67h] [rbp-5E77h]
    _BYTE v1276[6]; // [rsp-5E66h] [rbp-5E76h]
    _BYTE v1277[6]; // [rsp-5E5Eh] [rbp-5E6Eh]
    char v1278; // [rsp-5E51h] [rbp-5E61h]
    int v1279; // [rsp-5D68h] [rbp-5D78h]
    char v1280; // [rsp-5D64h] [rbp-5D74h]
    char v1281; // [rsp-5D63h] [rbp-5D73h]
    char v1282; // [rsp-5D62h] [rbp-5D72h]
    char v1283; // [rsp-5D61h] [rbp-5D71h]
    __int64 v1284; // [rsp-5D60h] [rbp-5D70h]
    char v1285; // [rsp-5D48h] [rbp-5D58h]
    char v1286; // [rsp-5D47h] [rbp-5D57h]
    unsigned __int64 v1287; // [rsp-5D46h] [rbp-5D56h]
    int v1288; // [rsp-5D3Eh] [rbp-5D4Eh]
    int v1289; // [rsp-5D3Ah] [rbp-5D4Ah]
    char v1290; // [rsp-5D30h] [rbp-5D40h]
    char v1291; // [rsp-5D2Fh] [rbp-5D3Fh]
    __int64 v1292; // [rsp-5D2Eh] [rbp-5D3Eh]
    int v1293; // [rsp-5D26h] [rbp-5D36h]
    int v1294; // [rsp-5D22h] [rbp-5D32h]
    char v1295; // [rsp-5D18h] [rbp-5D28h]
    char v1296; // [rsp-5D17h] [rbp-5D27h]
    char v1297; // [rsp-5D16h] [rbp-5D26h]
    __int64 v1298; // [rsp-5D15h] [rbp-5D25h]
    __int64 v1299; // [rsp-5D0Dh] [rbp-5D1Dh]
    char v1300; // [rsp-5D00h] [rbp-5D10h]
    char v1301; // [rsp-5CFFh] [rbp-5D0Fh]
    char v1302; // [rsp-5CFEh] [rbp-5D0Eh]
    __int64 v1303; // [rsp-5CFDh] [rbp-5D0Dh]
    __int64 v1304; // [rsp-5CF5h] [rbp-5D05h]
    char v1305; // [rsp-5CE8h] [rbp-5CF8h]
    char v1306; // [rsp-5CE7h] [rbp-5CF7h]
    char v1307; // [rsp-5CE6h] [rbp-5CF6h]
    __int64 v1308; // [rsp-5CE5h] [rbp-5CF5h]
    __int64 v1309; // [rsp-5CDDh] [rbp-5CEDh]
    char v1310; // [rsp-5CD0h] [rbp-5CE0h]
    char v1311; // [rsp-5CCFh] [rbp-5CDFh]
    __int16 v1312; // [rsp-5CCEh] [rbp-5CDEh]
    int v1313; // [rsp-5CCCh] [rbp-5CDCh]
    unsigned __int8 v1314; // [rsp-5CC8h] [rbp-5CD8h]
    char v1315; // [rsp-5CB8h] [rbp-5CC8h]
    char v1316; // [rsp-5CB7h] [rbp-5CC7h]
    __int16 v1317; // [rsp-5CB6h] [rbp-5CC6h]
    int v1318; // [rsp-5CB4h] [rbp-5CC4h]
    unsigned __int8 v1319; // [rsp-5CB0h] [rbp-5CC0h]
    char v1320; // [rsp-5CA0h] [rbp-5CB0h]
    char v1321; // [rsp-5C9Fh] [rbp-5CAFh]
    __int16 v1322; // [rsp-5C9Eh] [rbp-5CAEh]
    int v1323; // [rsp-5C9Ch] [rbp-5CACh]
    __int64 v1324; // [rsp-5C98h] [rbp-5CA8h]
    __int64 v1325; // [rsp-5C90h] [rbp-5CA0h]
    __int64 v1326; // [rsp-5C88h] [rbp-5C98h]
    unsigned __int16 v1327; // [rsp-5C80h] [rbp-5C90h]
    __int16 v1328; // [rsp-5C7Eh] [rbp-5C8Eh]
    __int64* v1329; // [rsp-5C78h] [rbp-5C88h]
    __int64 v1330; // [rsp-5C70h] [rbp-5C80h]
    unsigned __int16 v1331; // [rsp-5C68h] [rbp-5C78h]
    __int16 v1332; // [rsp-5C66h] [rbp-5C76h]
    __int64* v1333; // [rsp-5C60h] [rbp-5C70h]
    __int64 v1334; // [rsp-5C58h] [rbp-5C68h]
    unsigned __int16 v1335; // [rsp-5C50h] [rbp-5C60h]
    __int16 v1336; // [rsp-5C4Eh] [rbp-5C5Eh]
    __int64* v1337; // [rsp-5C48h] [rbp-5C58h]
    __int64 v1338; // [rsp-5C40h] [rbp-5C50h]
    __int64 v1339; // [rsp-5C38h] [rbp-5C48h]
    __int64 v1340; // [rsp-5C28h] [rbp-5C38h]
    int v1341; // [rsp-5C20h] [rbp-5C30h]
    int v1342; // [rsp-5C1Ch] [rbp-5C2Ch]
    int v1343; // [rsp-5C18h] [rbp-5C28h]
    __int64 v1344; // [rsp-5C10h] [rbp-5C20h]
    unsigned __int64 v1345; // [rsp-5BF8h] [rbp-5C08h]
    int v1346; // [rsp-5BF0h] [rbp-5C00h]
    int v1347; // [rsp-5BECh] [rbp-5BFCh]
    int v1348; // [rsp-5BE8h] [rbp-5BF8h]
    char v1349; // [rsp-5BE0h] [rbp-5BF0h]
    char v1350; // [rsp-5BDFh] [rbp-5BEFh]
    __int16 v1351; // [rsp-5BDEh] [rbp-5BEEh]
    unsigned __int64 v1352; // [rsp-5BDCh] [rbp-5BECh]
    unsigned __int64 v1353; // [rsp-5BD4h] [rbp-5BE4h]
    int v1354; // [rsp-5BCCh] [rbp-5BDCh]
    int v1355; // [rsp-5BC8h] [rbp-5BD8h]
    char v1356; // [rsp-5BC0h] [rbp-5BD0h]
    char v1357; // [rsp-5BBFh] [rbp-5BCFh]
    __int16 v1358; // [rsp-5BBEh] [rbp-5BCEh]
    __int64 v1359; // [rsp-5BBCh] [rbp-5BCCh]
    __int64 v1360; // [rsp-5BB4h] [rbp-5BC4h]
    int v1361; // [rsp-5BACh] [rbp-5BBCh]
    int v1362; // [rsp-5BA8h] [rbp-5BB8h]
    char v1363; // [rsp-5BA0h] [rbp-5BB0h]
    char v1364; // [rsp-5B9Fh] [rbp-5BAFh]
    __int16 v1365; // [rsp-5B9Eh] [rbp-5BAEh]
    __int64 v1366; // [rsp-5B9Ch] [rbp-5BACh]
    __int64 v1367; // [rsp-5B94h] [rbp-5BA4h]
    int v1368; // [rsp-5B8Ch] [rbp-5B9Ch]
    int v1369; // [rsp-5B88h] [rbp-5B98h]
    char v1370; // [rsp-5B80h] [rbp-5B90h]
    char v1371; // [rsp-5B7Fh] [rbp-5B8Fh]
    __int16 v1372; // [rsp-5B7Eh] [rbp-5B8Eh]
    __int64 v1373; // [rsp-5B7Ch] [rbp-5B8Ch]
    unsigned __int64 v1374; // [rsp-5B74h] [rbp-5B84h]
    int v1375; // [rsp-5B6Ch] [rbp-5B7Ch]
    int v1376; // [rsp-5B68h] [rbp-5B78h]
    char v1377; // [rsp-5B60h] [rbp-5B70h]
    char v1378; // [rsp-5B5Fh] [rbp-5B6Fh]
    __int16 v1379; // [rsp-5B5Eh] [rbp-5B6Eh]
    unsigned __int64 v1380; // [rsp-5B5Ch] [rbp-5B6Ch]
    unsigned __int64 v1381; // [rsp-5B54h] [rbp-5B64h]
    int v1382; // [rsp-5B4Ch] [rbp-5B5Ch]
    int v1383; // [rsp-5B48h] [rbp-5B58h]
    char v1384; // [rsp-5B40h] [rbp-5B50h]
    char v1385; // [rsp-5B3Fh] [rbp-5B4Fh]
    __int16 v1386; // [rsp-5B3Eh] [rbp-5B4Eh]
    __int64 v1387; // [rsp-5B3Ch] [rbp-5B4Ch]
    __int64 v1388; // [rsp-5B34h] [rbp-5B44h]
    int v1389; // [rsp-5B2Ch] [rbp-5B3Ch]
    int v1390; // [rsp-5B28h] [rbp-5B38h]
    char v1391; // [rsp-5B20h] [rbp-5B30h]
    char v1392; // [rsp-5B1Fh] [rbp-5B2Fh]
    __int16 v1393; // [rsp-5B1Eh] [rbp-5B2Eh]
    __int64 v1394; // [rsp-5B1Ch] [rbp-5B2Ch]
    __int64 v1395; // [rsp-5B14h] [rbp-5B24h]
    int v1396; // [rsp-5B0Ch] [rbp-5B1Ch]
    int v1397; // [rsp-5B08h] [rbp-5B18h]
    char v1398; // [rsp-5B00h] [rbp-5B10h]
    char v1399; // [rsp-5AFFh] [rbp-5B0Fh]
    __int16 v1400; // [rsp-5AFEh] [rbp-5B0Eh]
    __int64 v1401; // [rsp-5AFCh] [rbp-5B0Ch]
    __int64 v1402; // [rsp-5AF4h] [rbp-5B04h]
    int v1403; // [rsp-5AECh] [rbp-5AFCh]
    int v1404; // [rsp-5AE8h] [rbp-5AF8h]
    char v1405; // [rsp-5AE0h] [rbp-5AF0h]
    char v1406; // [rsp-5ADFh] [rbp-5AEFh]
    __int16 v1407; // [rsp-5ADEh] [rbp-5AEEh]
    __int64 v1408; // [rsp-5ADCh] [rbp-5AECh]
    __int64 v1409; // [rsp-5AD4h] [rbp-5AE4h]
    unsigned int v1410; // [rsp-5ACCh] [rbp-5ADCh]
    unsigned int v1411; // [rsp-5AC8h] [rbp-5AD8h]
    char v1412; // [rsp-5AC0h] [rbp-5AD0h]
    char v1413; // [rsp-5ABFh] [rbp-5ACFh]
    __int16 v1414; // [rsp-5ABEh] [rbp-5ACEh]
    __int64 v1415; // [rsp-5ABCh] [rbp-5ACCh]
    unsigned __int64 v1416; // [rsp-5AB4h] [rbp-5AC4h]
    int v1417; // [rsp-5AACh] [rbp-5ABCh]
    int v1418; // [rsp-5AA8h] [rbp-5AB8h]
    char v1419; // [rsp-5AA0h] [rbp-5AB0h]
    char v1420; // [rsp-5A9Fh] [rbp-5AAFh]
    __int16 v1421; // [rsp-5A9Eh] [rbp-5AAEh]
    __int64 v1422; // [rsp-5A9Ch] [rbp-5AACh]
    __int64 v1423; // [rsp-5A94h] [rbp-5AA4h]
    int v1424; // [rsp-5A8Ch] [rbp-5A9Ch]
    int v1425; // [rsp-5A88h] [rbp-5A98h]
    char v1426; // [rsp-5A78h] [rbp-5A88h]
    char v1427; // [rsp-5A77h] [rbp-5A87h]
    char v1428; // [rsp-5A76h] [rbp-5A86h]
    __int64* v1429; // [rsp-5A75h] [rbp-5A85h]
    __int64 v1430; // [rsp-5A6Dh] [rbp-5A7Dh]
    __int64 v1431; // [rsp-5A65h] [rbp-5A75h]
    __int64 v1432; // [rsp-5A5Dh] [rbp-5A6Dh]
    __int64 v1433; // [rsp-5A55h] [rbp-5A65h]
    __int64 v1434; // [rsp-5A4Dh] [rbp-5A5Dh]
    unsigned __int64 v1435; // [rsp-5A45h] [rbp-5A55h]
    int v1436; // [rsp-5A3Dh] [rbp-5A4Dh]
    int v1437; // [rsp-5A39h] [rbp-5A49h]
    unsigned int(__fastcall * Thread32Next)(__int64, int*); // [rsp-5A28h] [rbp-5A38h]
    unsigned int(__fastcall * GetThreadContext)(__int64, __int64*); // [rsp-5A20h] [rbp-5A30h]
    void(__fastcall * SuspendThread)(__int64); // [rsp-5A18h] [rbp-5A28h]
    __int64(__fastcall * ResumeThread)(__int64); // [rsp-5A10h] [rbp-5A20h]
    __int64(__fastcall * OpenThread)(__int64, _QWORD, _QWORD); // [rsp-5A08h] [rbp-5A18h]
    unsigned int(__fastcall * Thread32First)(__int64, int*); // [rsp-5A00h] [rbp-5A10h]
    unsigned int(__fastcall * Module32Next)(__int64, int*); // [rsp-59F8h] [rbp-5A08h]
    unsigned int(__fastcall * Module32First)(__int64, int*); // [rsp-59F0h] [rbp-5A00h]
    __int64 v1446; // [rsp-59E8h] [rbp-59F8h]
    __int64 v1447; // [rsp-59E0h] [rbp-59F0h]
    __int64 v1448; // [rsp-59D8h] [rbp-59E8h]
    unsigned int(__fastcall * GetExitCodeProcess)(__int64, int*); // [rsp-59D0h] [rbp-59E0h]
    unsigned int(__fastcall * GetProcessTimes)(__int64, __int64*, __int64*, __int64*, __int64*); // [rsp-59C8h] [rbp-59D8h]
    _BYTE* v1451; // [rsp-59C0h] [rbp-59D0h]
    unsigned int(__fastcall * GetFileAttributesExW_1)(__int64*, _QWORD, __int64*); // [rsp-59B8h] [rbp-59C8h]
    unsigned int(__fastcall * Process32First)(__int64, int*); // [rsp-59B0h] [rbp-59C0h]
    unsigned int(__fastcall * ReadFile)(__int64, int*, __int64, __int64*, _QWORD); // [rsp-59A8h] [rbp-59B8h]
    __int64 v1455; // [rsp-59A0h] [rbp-59B0h]
    __int64 v1456; // [rsp-5998h] [rbp-59A8h]
    __int64(__fastcall * GetProcessId)(__int64); // [rsp-5990h] [rbp-59A0h]
    unsigned int(__fastcall * _wcsnicmp)(__int64, __int16*, _QWORD); // [rsp-5988h] [rbp-5998h]
    char v1459; // [rsp-5980h] [rbp-5990h]
    char v1460; // [rsp-597Fh] [rbp-598Fh]
    __int16 v1461; // [rsp-597Eh] [rbp-598Eh]
    int v1462; // [rsp-597Ch] [rbp-598Ch]
    __int64 v1463; // [rsp-5978h] [rbp-5988h]
    __int64(__fastcall * NtQueryObject)(__int64, __int64, unsigned __int16*, __int64, _QWORD); // [rsp-5968h] [rbp-5978h]
    int v1465; // [rsp-5960h] [rbp-5970h]
    int v1466; // [rsp-595Ch] [rbp-596Ch]
    __int64 v1467; // [rsp-5958h] [rbp-5968h]
    __int64 v1468; // [rsp-5950h] [rbp-5960h]
    unsigned int(__fastcall * DuplicateHandle)(__int64, _QWORD, __int64, __int64*, __int64, _DWORD, _DWORD); // [rsp-5948h] [rbp-5958h]
    __int64 NSPStartup; // [rsp-5940h] [rbp-5950h]
    __int64(__fastcall * FindWindowExA)(_QWORD, _QWORD, __int64*, _QWORD); // [rsp-5938h] [rbp-5948h]
    void(__fastcall * GetClientRect)(__int64, __int64*); // [rsp-5930h] [rbp-5940h]
    __int64(__fastcall * GetTopWindow)(_QWORD); // [rsp-5928h] [rbp-5938h]
    void(__fastcall * GetWindowThreadId)(__int64, __int64*); // [rsp-5920h] [rbp-5930h]
    __int64(__fastcall * GetWindowTextA)(__int64, char*, __int64); // [rsp-5918h] [rbp-5928h]
    unsigned int(__fastcall * GetProcessTimes_3)(__int64, __int64*, __int64*, __int64*, __int64*); // [rsp-5910h] [rbp-5920h]
    __int64 v1477; // [rsp-5908h] [rbp-5918h]
    __int64 v1478; // [rsp-5900h] [rbp-5910h]
    int v1479; // [rsp-58F8h] [rbp-5908h]
    __int64 v1480; // [rsp-58F4h] [rbp-5904h]
    int v1481; // [rsp-58ECh] [rbp-58FCh]
    __int64 v1482; // [rsp-58E8h] [rbp-58F8h]
    __int64 v1483; // [rsp-58D8h] [rbp-58E8h]
    __int64 v1484; // [rsp-58D0h] [rbp-58E0h]
    __int64 v1485; // [rsp-58C8h] [rbp-58D8h]
    int v1486; // [rsp-58A8h] [rbp-58B8h]
    __int64 v1487; // [rsp-58A0h] [rbp-58B0h]
    __int64 v1488; // [rsp-5898h] [rbp-58A8h]
    __int64 v1489; // [rsp-5890h] [rbp-58A0h]
    unsigned int(__fastcall * GetExitCodeProcess_1)(__int64, __int64*); // [rsp-5888h] [rbp-5898h]
    __int64 v1491; // [rsp-5880h] [rbp-5890h]
    _BYTE* v1492; // [rsp-5878h] [rbp-5888h]
    __int64 v1493; // [rsp-5870h] [rbp-5880h]
    __int64(__fastcall * realloc)(unsigned int*, _QWORD); // [rsp-5868h] [rbp-5878h]
    __int64(__fastcall * GetWindow)(__int64, __int64); // [rsp-5860h] [rbp-5870h]
    void(__fastcall * GetWindowRect)(__int64, __int64*); // [rsp-5858h] [rbp-5868h]
    unsigned int(__fastcall * EnumProcesses)(__int64*, __int64, unsigned int*); // [rsp-5850h] [rbp-5860h]
    __int64(__fastcall * GetClassNameW)(__int64, __int64*, __int64); // [rsp-5848h] [rbp-5858h]
    unsigned int(__fastcall * Process32Next)(__int64, int*); // [rsp-5840h] [rbp-5850h]
    __int64(__fastcall * GetWindowTextW)(__int64, __int64*, __int64); // [rsp-5838h] [rbp-5848h]
    int v1501; // [rsp-5828h] [rbp-5838h]
    unsigned int v1502; // [rsp-5820h] [rbp-5830h]
    unsigned int v1503; // [rsp-5808h] [rbp-5818h]
    int v1504; // [rsp-57FCh] [rbp-580Ch]
    int v1505; // [rsp-57F8h] [rbp-5808h]
    int v1506; // [rsp-57F4h] [rbp-5804h]
    __int64 v1507; // [rsp-56F8h] [rbp-5708h]
    int v1508; // [rsp-56D8h] [rbp-56E8h]
    int v1509; // [rsp-56D4h] [rbp-56E4h]
    __int64 v1510; // [rsp-56C8h] [rbp-56D8h]
    char v1511; // [rsp-56B0h] [rbp-56C0h]
    char v1512; // [rsp-56AFh] [rbp-56BFh]
    unsigned __int64 v1513; // [rsp-56AEh] [rbp-56BEh]
    int v1514; // [rsp-56A6h] [rbp-56B6h]
    int v1515; // [rsp-56A2h] [rbp-56B2h]
    _QWORD* v1516; // [rsp-569Eh] [rbp-56AEh]
    __int64 v1517; // [rsp-5696h] [rbp-56A6h]
    __int64 v1518; // [rsp-568Eh] [rbp-569Eh]
    __int64 v1519; // [rsp-5686h] [rbp-5696h]
    __int64 v1520; // [rsp-567Eh] [rbp-568Eh]
    __int64 v1521; // [rsp-5670h] [rbp-5680h]
    int v1522; // [rsp-5660h] [rbp-5670h]
    unsigned int v1523; // [rsp-5658h] [rbp-5668h]
    int v1524; // [rsp-5654h] [rbp-5664h]
    __int64 v1525; // [rsp-5640h] [rbp-5650h]
    int v1526; // [rsp-5638h] [rbp-5648h]
    __int64 v1527; // [rsp-5628h] [rbp-5638h]
    int v1528; // [rsp-5620h] [rbp-5630h]
    int v1529; // [rsp-561Ch] [rbp-562Ch]
    int v1530; // [rsp-5618h] [rbp-5628h]
    __int64 v1531; // [rsp-5610h] [rbp-5620h]
    __int64 v1532; // [rsp-5608h] [rbp-5618h]
    __int64 v1533; // [rsp-5600h] [rbp-5610h]
    __int64 NtProtectVirtualMemory; // [rsp-55F8h] [rbp-5608h]
    __int64 v1535; // [rsp-55F0h] [rbp-5600h]
    __int64 v1536; // [rsp-55E8h] [rbp-55F8h]
    __int64 v1537; // [rsp-55E0h] [rbp-55F0h]
    char v1538; // [rsp-55D8h] [rbp-55E8h]
    char v1539; // [rsp-55D7h] [rbp-55E7h]
    _BYTE v1540[6]; // [rsp-55D6h] [rbp-55E6h]
    int v1541; // [rsp-54E8h] [rbp-54F8h]
    __int16 v1542; // [rsp-54E2h] [rbp-54F2h]
    __int64 v1543; // [rsp-5408h] [rbp-5418h]
    int v1544; // [rsp-53E8h] [rbp-53F8h]
    int v1545; // [rsp-53E4h] [rbp-53F4h]
    __int64 v1546; // [rsp-53D8h] [rbp-53E8h]
    int v1547; // [rsp-53B8h] [rbp-53C8h]
    __int64 v1548; // [rsp-53B0h] [rbp-53C0h]
    int v1549; // [rsp-5390h] [rbp-53A0h]
    __int64 v1550; // [rsp-5388h] [rbp-5398h]
    int v1551; // [rsp-5368h] [rbp-5378h]
    __int64 v1552; // [rsp-5360h] [rbp-5370h]
    int v1553; // [rsp-5340h] [rbp-5350h]
    int v1554; // [rsp-5338h] [rbp-5348h]
    unsigned __int64 v1555; // [rsp-5320h] [rbp-5330h]
    unsigned int v1556; // [rsp-5318h] [rbp-5328h]
    int v1557; // [rsp-5308h] [rbp-5318h]
    int v1558; // [rsp-5304h] [rbp-5314h]
    int v1559; // [rsp-5300h] [rbp-5310h]
    int v1560; // [rsp-52FCh] [rbp-530Ch]
    __int64 v1561; // [rsp-50F8h] [rbp-5108h]
    char v1562; // [rsp-50C0h] [rbp-50D0h]
    __int64 v1563; // [rsp-50B8h] [rbp-50C8h]
    char v1564; // [rsp-5080h] [rbp-5090h]
    __int64 v1565; // [rsp-5078h] [rbp-5088h]
    unsigned int v1566; // [rsp-4FF8h] [rbp-5008h]
    char v1567; // [rsp-4FF0h] [rbp-5000h]
    unsigned int v1568; // [rsp-4FEFh] [rbp-4FFFh]
    unsigned __int16 v1569; // [rsp-4FEAh] [rbp-4FFAh]
    __int16 v1570; // [rsp-4FE4h] [rbp-4FF4h]
    int v1571; // [rsp-4FDEh] [rbp-4FEEh]
    __int64 v1572; // [rsp-4C18h] [rbp-4C28h]
    __int64 v1573; // [rsp-4A18h] [rbp-4A28h]
    __int64 v1574; // [rsp-4918h] [rbp-4928h]
    __int64 v1575; // [rsp-4818h] [rbp-4828h]
    __int16 v1576; // [rsp-4718h] [rbp-4728h]
    __int64 v1577; // [rsp-4518h] [rbp-4528h]
    int v1578; // [rsp-44E8h] [rbp-44F8h]
    int v1579; // [rsp-44D0h] [rbp-44E0h]
    __int64 v1580; // [rsp-44A8h] [rbp-44B8h]
    __int64 v1581; // [rsp-4480h] [rbp-4490h]
    unsigned __int16 v1582; // [rsp-4048h] [rbp-4058h]
    __int64 v1583; // [rsp-4040h] [rbp-4050h]
    unsigned __int8 v1584; // [rsp-3C48h] [rbp-3C58h]
    __int64 v1585; // [rsp-2C48h] [rbp-2C58h]
    __int64 v1586; // [rsp-2A48h] [rbp-2A58h]
    __int64 v1587; // [rsp-2848h] [rbp-2858h]
    __int64 v1588; // [rsp-2648h] [rbp-2658h]
    __int64 v1589; // [rsp-2008h] [rbp-2018h]
    __int64 v1590; // [rsp-2000h] [rbp-2010h]
    __int64 v1591; // [rsp-1008h] [rbp-1018h]
    __int64 Report; // [rsp+20h] [rbp+10h]
    __int64(__fastcall * GetModuleHandleA)(char*); // [rsp+28h] [rbp+18h]
    __int64(__fastcall * GetProcAddress)(__int64, __int64*); // [rsp+30h] [rbp+20h]

    v5 = alloca(MEMORY[0xDCDD](a1, a2, a3, a4, a2, a3));
    strcpy(&v148, "KERNEL32.dll");
    hKernel32 = GetModuleHandleA(&v148);
    v99 = 1;
    strcpy(&v232, "BEClient_x64.dll");
    hBEClient = GetModuleHandleA(&v232);
    if (hBEClient && *(hBEClient + *(hBEClient + 60) + 8) >= 0x5D7AA2AFu)
        v81 = a5;
    else
        v81 = &v99;
    strcpy(&v202, "GetTickCount");
    GetTickCount = GetProcAddress(hKernel32, &v202);
    strcpy(&v179, "CloseHandle");
    CloseHandle = GetProcAddress(hKernel32, &v179);
    strcpy(&v233, "OpenProcessToken");
    OpenProcessToken = GetProcAddress(hKernel32, &v233);
    if (OpenProcessToken && OpenProcessToken(-1i64, 32i64, &v1260))
    {
        strcpy(&v151, "advapi32.dll");
        strcpy(&v253, "LookupPrivilegeValueA");
        hAdvapi = GetModuleHandleA(&v151);
        LookupPrivilegeValueA = GetProcAddress(hAdvapi, &v253);
        if (LookupPrivilegeValueA)
        {
            strcpy(&v234, "SeDebugPrivilege");
            if (LookupPrivilegeValueA(0i64, &v234, &v1467))
            {
                v1479 = 1;
                v1480 = v1467;
                v1481 = 2;
                strcpy(&v256, "AdjustTokenPrivileges");
                v7 = GetModuleHandleA(&v151);
                AdjustTokenPrivileges = GetProcAddress(v7, &v256);
                if (AdjustTokenPrivileges)
                    AdjustTokenPrivileges(v1260, 0i64, &v1479, 0i64, 0i64, 0i64);
            }
        }
        CloseHandle(v1260);
    }
    strcpy(&v173, "ntdll.dll");
    hNtdll = GetModuleHandleA(&v173);
    strcpy(&v250, "NtQueryVirtualMemory");
    NtQueryVirtualMemory = GetProcAddress(hNtdll, &v250);
    strcpy(&v257, "NtProtectVirtualMemory");
    NtProtectVirtualMemory = GetProcAddress(hNtdll, &v257);
    strcpy(&v203, "IsBadReadPtr");
    hKernel32_1 = GetModuleHandleA(&v148);
    IsBadReadPtr = GetProcAddress(hKernel32_1, &v203);
    v1208 = ~IsBadReadPtr;
    strcpy(&v247, "NtReadVirtualMemory");
    NtReadVirtualMemory = GetProcAddress(hNtdll, &v247);
    strcpy(&v119, "msvcrt.dll");
    strcpy(&v155, "memcpy");
    hMsvcrt = GetModuleHandleA(&v119);
    memcpy = GetProcAddress(hMsvcrt, &v155);
    strcpy(&v154, "memcmp");
    hMsvcrt_1 = GetModuleHandleA(&v119);
    memcmp = GetProcAddress(hMsvcrt_1, &v154);
    strcpy(&v248, "GetCurrentProcessId");
    GetCurrentProcessId = GetProcAddress(hKernel32, &v248);
    strcpy(&v180, "OpenProcess");
    OpenProcess = GetProcAddress(hKernel32, &v180);
    currentProcessId = GetCurrentProcessId();
    hCurrentProcess = OpenProcess(1048i64, 0i64, currentProcessId);
    strcpy(&v150, "Sleep");
    Sleep = GetProcAddress(hKernel32, &v150);
    v433 = 1304;
    v434 = 18;
    v435 = 111;
    v436 = 106;
    v437 = 101;
    v438 = 99;
    v439 = 116;
    v440 = 115;
    v441 = 92;
    v442 = 80;
    v443 = 85;
    v444 = 66;
    v445 = 71;
    v446 = 67;
    v447 = 104;
    v448 = 105;
    v449 = 110;
    v450 = 101;
    v451 = 115;
    v452 = 101;
    memset(v453, 0, 0xEui64);
    v454 = 1303;
    v455 = 29;
    v456 = 66;
    v457 = 97;
    v458 = 116;
    v459 = 116;
    v460 = 108;
    v461 = 101;
    v462 = 71;
    v463 = 114;
    v464 = 111;
    v465 = 117;
    v466 = 110;
    v467 = 100;
    v468 = 115;
    v469 = 80;
    v470 = 114;
    v471 = 105;
    v472 = 118;
    v473 = 97;
    v474 = 116;
    v475 = 101;
    v476 = 95;
    v477 = 67;
    v478 = 104;
    v479 = 101;
    v480 = 97;
    v481 = 116;
    v482 = 69;
    v483 = 83;
    v484 = 80;
    memset(v485, 0, sizeof(v485));
    v486 = 1303;
    v487 = 22;
    v488 = 91;
    v489 = 0;
    v490 = 37;
    v491 = 0;
    v492 = 46;
    v493 = 0;
    v494 = 48;
    v495 = 0;
    v496 = 102;
    v497 = 0;
    v498 = 109;
    v499 = 0;
    v500 = 93;
    v501 = 0;
    v502 = 32;
    v503 = 0;
    v504 = 37;
    v505 = 0;
    v506 = 115;
    v507 = 0;
    v508 = 0;
    v509 = 0;
    memset(&v510, 0, 0xAui64);
    v511 = 1342;
    v512 = 32;
    v513 = 0;
    v514 = 0;
    v515 = 0;
    v516 = 0;
    v517 = 78;
    v518 = 101;
    v519 = 99;
    v520 = 107;
    v521 = 0;
    v522 = 0;
    v523 = 0;
    v524 = 0;
    v525 = 67;
    v526 = 104;
    v527 = 101;
    v528 = 115;
    v529 = 116;
    v530 = 0;
    v531 = 0;
    v532 = 0;
    v533 = 0;
    v534 = 0;
    v535 = 0;
    v536 = 0;
    v537 = 77;
    v538 = 111;
    v539 = 117;
    v540 = 115;
    v541 = 101;
    v542 = 32;
    v543 = 49;
    v544 = 0;
    v545 = 1343;
    v546 = 15;
    v547 = 80;
    v548 = 108;
    v549 = 97;
    v550 = 121;
    v551 = 101;
    v552 = 114;
    v553 = 69;
    v554 = 83;
    v555 = 80;
    v556 = 67;
    v557 = 111;
    v558 = 108;
    v559 = 111;
    v560 = 114;
    v561 = 0;
    memset(&v562, 0, 0x11ui64);
    v563 = 1344;
    v564 = 32;
    v565 = 32;
    v566 = 0;
    v567 = 65;
    v568 = 0;
    v569 = 105;
    v570 = 0;
    v571 = 109;
    v572 = 0;
    v573 = 98;
    v574 = 0;
    v575 = 111;
    v576 = 0;
    v577 = 116;
    v578 = 0;
    v579 = 58;
    v580 = 0;
    v581 = 32;
    v582 = 0;
    v583 = 37;
    v584 = 0;
    v585 = 100;
    v586 = 0;
    v587 = 0;
    v588 = 0;
    v589 = 45;
    v590 = 0;
    v591 = 62;
    v592 = 0;
    v593 = 32;
    v594 = 0;
    v595 = 65;
    v596 = 0;
    v597 = 1334;
    v598 = 12;
    v599 = 72;
    v600 = 97;
    v601 = 99;
    v602 = 107;
    v603 = 77;
    v604 = 97;
    v605 = 99;
    v606 = 104;
    v607 = 105;
    v608 = 110;
    v609 = 101;
    v610 = 0;
    memset(&v611, 0, 0x14ui64);
    v612 = 1354;
    v613 = 16;
    v614 = 86;
    v615 = 105;
    v616 = 115;
    v617 = 117;
    v618 = 97;
    v619 = 108;
    v620 = 72;
    v621 = 97;
    v622 = 99;
    v623 = 107;
    v624 = 115;
    v625 = 46;
    v626 = 110;
    v627 = 101;
    v628 = 116;
    v629 = 0;
    memset(&v630, 0, 0x10ui64);
    v631 = 1360;
    v632 = 32;
    v633 = 62;
    v634 = 35;
    v635 = 47;
    v636 = 101;
    v637 = 62;
    v638 = 49;
    v639 = 49;
    v640 = 78;
    v641 = 78;
    v642 = 86;
    v643 = 61;
    v644 = 66;
    v645 = 118;
    v646 = 40;
    v647 = 42;
    v648 = 58;
    v649 = 46;
    v650 = 70;
    v651 = 63;
    v652 = 117;
    v653 = 117;
    v654 = 35;
    v655 = 40;
    v656 = 103;
    v657 = 82;
    v658 = 85;
    v659 = 46;
    v660 = 111;
    v661 = 48;
    v662 = 88;
    v663 = 71;
    v664 = 72;
    v665 = 1359;
    v666 = 32;
    v667 = 68;
    v668 = 76;
    v669 = 76;
    v670 = 73;
    v671 = 110;
    v672 = 106;
    v673 = 101;
    v674 = 99;
    v675 = 116;
    v676 = 105;
    v677 = 111;
    v678 = 110;
    v679 = 45;
    v680 = 109;
    v681 = 97;
    v682 = 115;
    v683 = 116;
    v684 = 101;
    v685 = 114;
    v686 = 92;
    v687 = 120;
    v688 = 54;
    v689 = 52;
    v690 = 92;
    v691 = 82;
    v692 = 101;
    v693 = 108;
    v694 = 101;
    v695 = 97;
    v696 = 115;
    v697 = 101;
    v698 = 92;
    v699 = 1362;
    v700 = 16;
    v701 = 78;
    v702 = 0;
    v703 = 97;
    v704 = 0;
    v705 = 109;
    v706 = 0;
    v707 = 101;
    v708 = 0;
    v709 = 69;
    v710 = 0;
    v711 = 83;
    v712 = 0;
    v713 = 80;
    v714 = 0;
    v715 = 0;
    v716 = 0;
    memset(&v717, 0, 0x10ui64);
    v718 = 1352;
    v719 = 20;
    v720 = 83;
    v721 = 0;
    v722 = 107;
    v723 = 0;
    v724 = 117;
    v725 = 0;
    v726 = 108;
    v727 = 0;
    v728 = 108;
    v729 = 0;
    v730 = 104;
    v731 = 0;
    v732 = 97;
    v733 = 0;
    v734 = 99;
    v735 = 0;
    v736 = 107;
    v737 = 0;
    v738 = 0;
    v739 = 0;
    memset(&v740, 0, 0xCui64);
    v741 = 1365;
    v742 = 14;
    v743 = 46;
    v744 = 114;
    v745 = 100;
    v746 = 97;
    v747 = 116;
    v748 = 97;
    v749 = 36;
    v750 = 122;
    v751 = 122;
    v752 = 122;
    v753 = 100;
    v754 = 98;
    v755 = 103;
    v756 = 0;
    memset(&v757, 0, 0x12ui64);
    v758 = 1337;
    v759 = 14;
    v760 = 65;
    v761 = 0;
    v762 = 105;
    v763 = 0;
    v764 = 109;
    v765 = 0;
    v766 = 66;
    v767 = 0;
    v768 = 111;
    v769 = 0;
    v770 = 116;
    v771 = 0;
    v772 = 0;
    v773 = 0;
    memset(&v774, 0, 0x12ui64);
    v775 = 1337;
    v776 = 32;
    v777 = -21;
    v778 = 73;
    v779 = 65;
    v780 = -128;
    v781 = 60;
    v782 = 18;
    v783 = 63;
    v784 = 117;
    v785 = 5;
    v786 = -58;
    v787 = 2;
    v788 = 63;
    v789 = -21;
    v790 = 56;
    v791 = -115;
    v792 = 65;
    v793 = -48;
    v794 = 15;
    v795 = -66;
    v796 = -55;
    v797 = 60;
    v798 = 9;
    v799 = 119;
    v800 = 5;
    v801 = -125;
    v802 = -23;
    v803 = 48;
    v804 = -21;
    v805 = 6;
    v806 = -125;
    v807 = -31;
    v808 = -33;
    v809 = 1375;
    v810 = 2;
    v811 = 85;
    v812 = -23;
    memset(v813, 0, 0x1Eui64);
    v814 = 1375;
    v815 = 2;
    v816 = 87;
    v817 = -23;
    memset(v818, 0, 0x1Eui64);
    v819 = 1375;
    v820 = 2;
    v821 = 96;
    v822 = -23;
    memset(v823, 0, 0x1Eui64);
    v824 = 1384;
    v825 = 25;
    v826 = 68;
    v827 = 51;
    v828 = 68;
    v829 = 49;
    v830 = 49;
    v831 = 80;
    v832 = 114;
    v833 = 101;
    v834 = 115;
    v835 = 101;
    v836 = 110;
    v837 = 116;
    v838 = 32;
    v839 = 105;
    v840 = 110;
    v841 = 105;
    v842 = 116;
    v843 = 105;
    v844 = 97;
    v845 = 108;
    v846 = 105;
    v847 = 115;
    v848 = 101;
    v849 = 100;
    v850 = 0;
    memset(v851, 0, sizeof(v851));
    v852 = 1390;
    v853 = 10;
    v854 = 91;
    v855 = 32;
    v856 = 37;
    v857 = 46;
    v858 = 48;
    v859 = 102;
    v860 = 77;
    v861 = 32;
    v862 = 93;
    v863 = 0;
    memset(v864, 0, 0x16ui64);
    v865 = 1396;
    v866 = 11;
    v867 = 91;
    v868 = 104;
    v869 = 112;
    v870 = 58;
    v871 = 37;
    v872 = 100;
    v873 = 93;
    v874 = 37;
    v875 = 100;
    v876 = 109;
    v877 = 0;
    memset(v878, 0, 0x15ui64);
    v879 = 1334;
    v880 = 32;
    v881 = 72;
    v882 = -125;
    v883 = 100;
    v884 = 36;
    v885 = 56;
    v886 = 0;
    v887 = 72;
    v888 = -115;
    v889 = 76;
    v890 = 36;
    v891 = 88;
    v892 = 72;
    v893 = -117;
    v894 = 84;
    v895 = 36;
    v896 = 80;
    v897 = 76;
    v898 = -117;
    v899 = -56;
    v900 = 72;
    v901 = -119;
    v902 = 76;
    v903 = 36;
    v904 = 48;
    v905 = 76;
    v906 = -117;
    v907 = -57;
    v908 = 72;
    v909 = -115;
    v910 = 76;
    v911 = 36;
    v912 = 96;
    v913 = 1334;
    v914 = 32;
    v915 = 116;
    v916 = 31;
    v917 = -70;
    v918 = 8;
    v919 = 0;
    v920 = 0;
    v921 = 0;
    v922 = -1;
    v923 = 21;
    v924 = 96;
    v925 = 126;
    v926 = 0;
    v927 = 0;
    v928 = -123;
    v929 = -64;
    v930 = 117;
    v931 = 16;
    v932 = -14;
    v933 = 15;
    v934 = 16;
    v935 = -121;
    v936 = -128;
    v937 = 1;
    v938 = 0;
    v939 = 0;
    v940 = -117;
    v941 = -121;
    v942 = -120;
    v943 = 1;
    v944 = 0;
    v945 = 0;
    v946 = -21;
    v947 = 1334;
    v948 = 32;
    v949 = 64;
    v950 = -14;
    v951 = -86;
    v952 = 21;
    v953 = 111;
    v954 = 8;
    v955 = -46;
    v956 = -119;
    v957 = 78;
    v958 = -102;
    v959 = -76;
    v960 = 72;
    v961 = -107;
    v962 = 53;
    v963 = -45;
    v964 = 79;
    v965 = -100;
    v966 = 80;
    v967 = 79;
    v968 = 83;
    v969 = 73;
    v970 = 84;
    v971 = 73;
    v972 = 79;
    v973 = 78;
    v974 = 0;
    v975 = 0;
    v976 = 0;
    v977 = 0;
    v978 = 67;
    v979 = 79;
    v980 = 76;
    v981 = 1402;
    v982 = 3;
    v983 = -1;
    v984 = -32;
    v985 = -112;
    memset(v986, 0, 0x1Dui64);
    v987 = 1401;
    v988 = 32;
    v989 = 37;
    v990 = 115;
    v991 = 0;
    v992 = 0;
    v993 = 37;
    v994 = 100;
    v995 = 0;
    v996 = 0;
    v997 = 80;
    v998 = 79;
    v999 = 83;
    v1000 = 73;
    v1001 = 84;
    v1002 = 73;
    v1003 = 79;
    v1004 = 78;
    v1005 = 0;
    v1006 = 0;
    v1007 = 0;
    v1008 = 0;
    v1009 = 67;
    v1010 = 79;
    v1011 = 76;
    v1012 = 79;
    v1013 = 82;
    v1014 = 0;
    v1015 = 0;
    v1016 = 0;
    v1017 = 0;
    v1018 = 0;
    v1019 = 0;
    v1020 = 0;
    v1021 = 1334;
    v1022 = 32;
    v1023 = -114;
    v1024 = -123;
    v1025 = 118;
    v1026 = 93;
    v1027 = -51;
    v1028 = -38;
    v1029 = 69;
    v1030 = 46;
    v1031 = 117;
    v1032 = -70;
    v1033 = 18;
    v1034 = -76;
    v1035 = -57;
    v1036 = -71;
    v1037 = 72;
    v1038 = 114;
    v1039 = 17;
    v1040 = 109;
    v1041 = -71;
    v1042 = 72;
    v1043 = -95;
    v1044 = -38;
    v1045 = -90;
    v1046 = -71;
    v1047 = 72;
    v1048 = -89;
    v1049 = 103;
    v1050 = 107;
    v1051 = -71;
    v1052 = 72;
    v1053 = -112;
    v1054 = 44;
    v1055 = 1418;
    v1056 = 32;
    v1057 = 10;
    v1058 = 60;
    v1059 = 97;
    v1060 = 115;
    v1061 = 115;
    v1062 = 101;
    v1063 = 109;
    v1064 = 98;
    v1065 = 108;
    v1066 = 121;
    v1067 = 32;
    v1068 = 120;
    v1069 = 109;
    v1070 = 108;
    v1071 = 110;
    v1072 = 115;
    v1073 = 61;
    v1074 = 39;
    v1075 = 117;
    v1076 = 114;
    v1077 = 110;
    v1078 = 58;
    v1079 = 115;
    v1080 = 99;
    v1081 = 104;
    v1082 = 101;
    v1083 = 109;
    v1084 = 97;
    v1085 = 115;
    v1086 = 45;
    v1087 = 109;
    v1088 = 105;
    v275 = 0;
    for (i = 0i64; *v81 && (NtQueryVirtualMemory)(-1i64, i, 0i64, &v82, 48i64, &v326) >= 0; i = v84 + v82)
    {
        if (v85 == 4096
            && (v86 == 16 || v86 == 32 || v86 == 64)
            && (v82 > 0xFFFFFFFFFFFFFFFBui64 || v84 + v82 <= 0xFFFFFFFFFFFFFFFBui64)
            && (v86 != 64 || v84 != 110592))
        {
            if (v87 == 0x20000 || v87 == 0x40000)
            {
                if (((v60 = 0, v84 >= 0x11000)
                    || v84 >= 0x4000
                    && (v82 & 0xFF0000000000i64) != 0x7F0000000000i64
                    && (v82 & 0xFFF000000000i64) != 0x7F000000000i64
                    && v84 != 0x10000
                    && (v82 & 0xFFFFF0000000i64) != 0x70000000
                    && (v82 != 4063232 || v84 != 61440)
                    && (v82 != 4128768 || v84 != 0x4000))
                    && (v84 != 69632 || v87 != 0x40000 || v86 != 32)
                    || v60)
                {
                    v1511 = 0;
                    if (v60)
                        v329 = 52;
                    else
                        v329 = 47;
                    v1512 = v329;
                    v1513 = v82;
                    v1514 = v84;
                    v1515 = v87 | v86 | v85;
                    if (v60)
                    {
                        v1516 = v381;
                        v1517 = v381[510];
                        v1518 = v381[511];
                        v1519 = v381[512];
                        v1520 = v381[513];
                    }
                    if (v60)
                        v1261 = 58i64;
                    else
                        v1261 = 18i64;
                    (Report)(&v1511, v1261, 0i64);
                }
            }
            strcpy(&v178, "user32.dll");
            hUser32_12 = GetModuleHandleA(&v178);
            v330 = v83 == hUser32_12;
            v66 = v83 == hUser32_12;
            if (v87 == 0x20000 || v66)
            {
                for (j = v82; *v81 && j != v84 + v82; j += 4096i64)
                {
                    if ((NtReadVirtualMemory)(-1i64, j, &v1584, 4096i64, 0i64) >= 0)
                    {
                        for (k = 0; k < 0x1C; ++k)
                        {
                            if (*(&v433 + 20 * k) != 1402 || v66)
                            {
                                for (l = 0; (*(&v434 + 10 * k) + l) <= 0x1000ui64; ++l)
                                {
                                    if ((l + j) != &v435 + 40 * k)
                                    {
                                        for (m = 0; m < *(&v434 + 10 * k) && *(&v1584 + (m + l)) == *(&v433 + 40 * k + m + 8); ++m)
                                            ;
                                        if (m == *(&v434 + 10 * k)
                                            && (*(&v433 + 20 * k) != 1365 || *(&v1584 + l + 215) == 16725)
                                            && (*(&v433 + 20 * k) != 1375
                                                || *(j + (m + l)) < 0x2000u
                                                && (NtReadVirtualMemory)(-1i64, (m + l) + j + *(&v1584 + (m + l)) + 4, &v1584, 2i64, 0i64) >= 0
                                                && (*&v1584 == 21569 || *&v1584 == 33096 || v1584 == 161 && *(&v433 + 40 * k + 8) == 96))
                                            && (*(&v433 + 20 * k) != 1402 || *(&v1584 + l - 10) == 47176))
                                        {
                                            v1349 = 0;
                                            v1350 = 53;
                                            v1351 = *(&v433 + 20 * k);
                                            v1352 = l + j;
                                            v1353 = v82;
                                            v1354 = v84;
                                            v1355 = v87 | v86 | v85;
                                            (Report)(&v1349, 28i64, 0i64);
                                            if (v66)
                                                goto LABEL_82;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    LABEL_82:
        if (v85 == 4096 && (v86 == 16 || v86 == 32 || v86 == 64))
        {
            strcpy(&v172, "mmres.dll");
            hMmres = GetModuleHandleA(&v172);
            if (hMmres && hMmres == v83)
            {
                v372 = 0;
                v373 = 72;
                v374 = 1459;
                v375 = v84;
                (Report)(&v372, 8i64, 0i64);
            }
            else if (v86 == 64)
            {
                strcpy(&v177, "mshtml.dll");
                hMshtml = GetModuleHandleA(&v177);
                if (hMshtml)
                {
                    if (hMshtml == v83)
                    {
                        v368 = 0;
                        v369 = 72;
                        v370 = 1467;
                        v371 = v84;
                        (Report)(&v368, 8i64, 0i64);
                    }
                }
            }
        }
        v1228 = -1;
        if (v82 != i)
            v1228 = -2;
        if (v85 != 4096 || v86 == 1 || !v86 || v87 != 0x20000 && v87 != 0x1000000 || v86 & 0x100)
        {
            if (v85 == 4096 && (v86 == 1 || !v86) || v85 == 0x10000 || v85 == 0x2000)
            {
                if (v85 != 4096 || v86)
                {
                    v118 = i;
                LABEL_132:
                    if (!*v81 || v118 >= v84 + v82 || v118 >= v82 + 0x1000000)
                        goto LABEL_150;
                    while (1)
                    {
                        if ((IsBadReadPtr)(v118, 1i64)
                            || (NtQueryVirtualMemory)(-1i64, v118, 0i64, &v1507, 48i64, &v326) < 0
                            || v1508 != v85
                            || v1508 == 4096 && v1509 != v86
                            || (_mm_lfence(), (IsBadReadPtr)(v118, 1i64)))
                        {
                            if ((~v1208)(v118, 1i64)
                                || (NtQueryVirtualMemory)(-1i64, v118, 0i64, &v1507, 48i64, &v326) < 0
                                || v1508 != v85
                                || v1508 == 4096 && v1509 != v86
                                || (_mm_lfence(), (~v1208)(v118, 1i64)))
                            {
                                v118 += 0x10000i64;
                                goto LABEL_132;
                            }
                            qmemcpy(&v82, &v1507, 0x30ui64);
                            v1228 = 0;
                        }
                        else
                        {
                            qmemcpy(&v82, &v1507, 0x30ui64);
                            v1228 = 0;
                        }
                    LABEL_150:
                        if (!v1228 || v118 > 0x7FFFE1E30000i64 || v84 + v82 <= 0x7FFFE1E30000i64)
                            goto LABEL_154;
                        v118 = 140736983138304i64;
                    }
                }
                v1228 = 0;
            }
        }
        else
        {
            v273 = 0;
            while (*v81 && v273 < 2 && i != v84 + v82)
            {
                if ((NtReadVirtualMemory)(-1i64, i, &v1521, 16i64, 0i64) < 0 || (_mm_lfence(), (IsBadReadPtr)(i, 16i64)))
                {
                    if ((NtQueryVirtualMemory)(-1i64, i, 0i64, &v1543, 48i64, &v326) >= 0 && v1544 == v85 && v1545 == v86)
                        v1228 = 2;
                }
                else
                {
                    _mm_lfence();
                    memcpy(&v1482, i, 16i64);
                    v274 = 0;
                    while (memcmp(&v1521, &v1482, 16i64) && !(IsBadReadPtr)(i, 16i64) && !memcmp(&v1482, i, 16i64))
                    {
                        if (v274 == 3)
                        {
                            v1228 = 1;
                            memcpy(v1232, &v1482, 16i64);
                            break;
                        }
                        if ((NtReadVirtualMemory)(-1i64, i, &v1521, 16i64, 0i64) < 0)
                            break;
                        ++v274;
                    }
                }
                ++v273;
                i += 4096i64;
            }
        }
    LABEL_154:
        if (v1228 != 255 && v275 < 3)
        {
            v1226 = 0;
            v1227 = 33;
            v1229 = v82;
            v1230 = v84;
            v1231 = v87 | v86 | v85;
            (Report)(&v1226, 35i64, 0i64);
            ++v275;
        }
        if (v85 == 4096
            && v87 == 0x1000000
            && v82 == v83
            && (NtReadVirtualMemory)(-1i64, v82 + 60, &v1183, 4i64, 0i64) >= 0
            && (NtReadVirtualMemory)(-1i64, v82 + v1183 + 8, &v56, 4i64, 0i64) >= 0)
        {
            if (v56 == 1527957760
                && ((NtReadVirtualMemory)(-1i64, v82 + 4096, &v126, 16i64, 0i64) >= 0 && !v126
                    || (NtReadVirtualMemory)(-1i64, v82 + 5246976, &v126, 16i64, 0i64) >= 0 && v126 != 55830784)
                || v56 == 1511525429 && (NtReadVirtualMemory)(-1i64, v82 + 4096, &v126, 16i64, 0i64) >= 0 && v126
                || v56 == -56913115 && (NtReadVirtualMemory)(-1i64, v82 + 7155712, &v126, 16i64, 0i64) >= 0 && v126
                || v56 == 1164766483 && (NtReadVirtualMemory)(-1i64, v82 + 439304, &v126, 16i64, 0i64) >= 0 && v126 != 686588744
                || v56 == 1179212505 && (NtReadVirtualMemory)(-1i64, v82 + 496776, &v126, 16i64, 0i64) >= 0 && v126 != 686588744
                || v56 == 1204678187 && (NtReadVirtualMemory)(-1i64, v82 + 547608, &v126, 16i64, 0i64) >= 0 && v126 != 686588744
                || v56 == 1184887342 && (NtReadVirtualMemory)(-1i64, v82 + 510376, &v126, 16i64, 0i64) >= 0 && v126 != 686588744
                || v56 == 1223441111 && (NtReadVirtualMemory)(-1i64, v82 + 734032, &v126, 16i64, 0i64) >= 0 && v126 != 686588744
                || v56 == 1519280160 && (NtReadVirtualMemory)(-1i64, v82 + 4931584, &v126, 16i64, 0i64) >= 0 && v126
                || v56 == 1439191921 && (NtReadVirtualMemory)(-1i64, v82 + 98304, &v126, 16i64, 0i64) >= 0 && v126)
            {
                v1305 = 0;
                v1306 = 70;
                if (v56 == 1164766483)
                {
                    v303 = 3;
                }
                else
                {
                    if (v56 == 1179212505)
                    {
                        v302 = 4;
                    }
                    else
                    {
                        if (v56 == 1204678187)
                        {
                            v301 = 5;
                        }
                        else
                        {
                            if (v56 == 1184887342)
                            {
                                v300 = 6;
                            }
                            else
                            {
                                if (v56 == 1223441111)
                                {
                                    v299 = 7;
                                }
                                else
                                {
                                    if (v56 == -56913115 || v56 == 1519280160)
                                    {
                                        v333 = 8;
                                    }
                                    else
                                    {
                                        if (v56 == 1439191921)
                                            v332 = 9;
                                        else
                                            v332 = 1;
                                        v333 = v332;
                                    }
                                    v299 = v333;
                                }
                                v300 = v299;
                            }
                            v301 = v300;
                        }
                        v302 = v301;
                    }
                    v303 = v302;
                }
                v1307 = v303;
                v1308 = v126;
                v1309 = v127;
                (Report)(&v1305, 19i64, 0i64);
            }
            else if (v56 == 1567786053 || v56 == 1585947090 || v56 == 1586741064)
            {
                v1356 = 0;
                v1357 = 53;
                v1358 = 1482;
                v1359 = v56;
                v1209 = (v82 + *(v82 + 60) + 24);
                v1360 = v1209[14];
                v1361 = v1209[4];
                v1362 = v1209[37];
                (Report)(&v1356, 28i64, 0i64);
            }
            strcpy(&v176, "NSPStartup");
            NSPStartup = GetProcAddress(v82, &v176);
            if (NSPStartup)
            {
                v293 = (v82 + *(v82 + 60) + 24);
                if (v293[37] == 6944 || v293[37] == 3696 || v293[37] == 6712 || v56 >= 0x5C600000 && v56 < 0x5C700000)
                {
                    v1363 = 0;
                    v1364 = 53;
                    v1365 = 1472;
                    v1366 = v56;
                    v1367 = v293[14];
                    v1368 = v293[4];
                    v1369 = v293[37];
                    (Report)(&v1363, 28i64, 0i64);
                }
            }
        }
    }
    result = *v81;
    if (!*v81)
        return result;
    v1266 = ~v1208;
    v304 = (NtQueryVirtualMemory)(-1i64, ~v1208, 0i64, &v82, 48i64, &v326) < 0;
    v61 = v304;
    if (v304 || v85 != 4096 || v87 != 0x1000000 && v87 != 0x40000)
    {
        v1412 = 0;
        v1413 = 53;
        v1414 = 1449;
        v1415 = v1266;
        if (v61)
            v1267 = 0i64;
        else
            v1267 = v82;
        v1416 = v1267;
        if (v61)
            v1268 = 0i64;
        else
            v1268 = v84;
        v1417 = v1268;
        if (v61)
            v305 = 0;
        else
            v305 = v87 | v86 | v85;
        v1418 = v305;
        (Report)(&v1412, 28i64, 0i64);
    }
    strcpy(&v156, "malloc");
    hMsvcrt_2 = GetModuleHandleA(&v119);
    malloc = GetProcAddress(hMsvcrt_2, &v156);
    strcpy(&v159, "realloc");
    hMsvcrt_3 = GetModuleHandleA(&v119);
    realloc = GetProcAddress(hMsvcrt_3, &v159);
    strcpy(&v149, "free");
    hMsvcrt_4 = GetModuleHandleA(&v119);
    free = GetProcAddress(hMsvcrt_4, &v149);
    strcpy(&v261, "NtQuerySystemInformation");
    NtQuerySystemInformation = GetProcAddress(hNtdll, &v261);
    strcpy(&v98, "USER32.dll");
    strcpy(&v204, "GetTopWindow");
    hUser32 = GetModuleHandleA(&v98);
    GetTopWindow = GetProcAddress(hUser32, &v204);
    strcpy(&v171, "GetWindow");
    hUser32_1 = GetModuleHandleA(&v98);
    GetWindow = GetProcAddress(hUser32_1, &v171);
    strcpy(&v209, "FindWindowExA");
    hUser32_2 = GetModuleHandleA(&v98);
    FindWindowExA = GetProcAddress(hUser32_2, &v209);
    strcpy(&v260, "GetWindowThreadProcessId");
    hUser32_3 = GetModuleHandleA(&v98);
    GetWindowThreadId = GetProcAddress(hUser32_3, &v260);
    strcpy(&v223, "GetWindowLongA");
    hUser32_4 = GetModuleHandleA(&v98);
    GetWindowLongA = GetProcAddress(hUser32_4, &v223);
    CloseHandle(hCurrentProcess);
    currentProcessId_1 = GetCurrentProcessId();
    hCurrentProcess = OpenProcess(2035711i64, 0i64, currentProcessId_1);
    strcpy(&v225, "GetWindowTextA");
    hUser32_5 = GetModuleHandleA(&v98);
    GetWindowTextA = GetProcAddress(hUser32_5, &v225);
    strcpy(&v220, "GetWindowTextW");
    hUser32_6 = GetModuleHandleA(&v98);
    GetWindowTextW = GetProcAddress(hUser32_6, &v220);
    strcpy(&v210, "GetClassNameW");
    hUser32_7 = GetModuleHandleA(&v98);
    GetClassNameW = GetProcAddress(hUser32_7, &v210);
    strcpy(&v208, "GetWindowRect");
    hUser32_8 = GetModuleHandleA(&v98);
    GetWindowRect = GetProcAddress(hUser32_8, &v208);
    strcpy(&v266, "QueryFullProcessImageNameW");
    QueryFullProcessImageNameW = GetModuleHandleA(&v148);
    v390 = GetProcAddress(QueryFullProcessImageNameW, &v266);
    strcpy(&v246, "WideCharToMultiByte");
    WideCharToMultiByte = GetProcAddress(hKernel32, &v246);
    strcpy(&v252, "GetFileAttributesExA");
    GetFileAttributesExA = GetProcAddress(hKernel32, &v252);
    strcpy(&v251, "GetFileAttributesExW");
    GetFileAttributesExW = GetProcAddress(hKernel32, &v251);
    v57 = malloc(20480i64);
    *v57 = 0;
    *(v57 + 1) = 60;
    v40 = 4;
    strcpy(&v211, "GetClientRect");
    hUser32_9 = GetModuleHandleA(&v98);
    GetClientRect = GetProcAddress(hUser32_9, &v211);
    strcpy(&v221, "ClientToScreen");
    hUser32_10 = GetModuleHandleA(&v98);
    ClientToScreen = GetProcAddress(hUser32_10, &v221);
    strcpy(&v258, "GetWindowDisplayAffinity");
    hUser32_11 = GetModuleHandleA(&v98);
    GetWindowDisplayAffinity = GetProcAddress(hUser32_11, &v258);
    strcpy(&v152, "R6Game");
    hR6Game = FindWindowExA(0i64, 0i64, &v152, 0i64);
    GetClientRect(hR6Game, &v1240);
    ClientToScreen(hR6Game, &v1240);
    ClientToScreen(hR6Game, &v1241);
    v144 = 0;
    v107 = 0;
    v117 = GetTopWindow(0i64);
    if (v117)
    {
        while (2)
        {
            v1541 = 0;
            v124 = -1;
            GetWindowThreadId(v117, &v276);
            if (v276 != GetCurrentProcessId())
            {
                v124 = GetWindowTextA(v117, &v1541 + 2, 128i64);
                for (n = 0; n < v124 - 5; ++n)
                {
                    if (*(&v1541 + n + 2) == 1685022787 && *(&v1542 + n) == 29479
                        || *(&v1541 + n + 2) == 1635017043 && *(&v1542 + n) == 13678
                        || *(&v1541 + n + 2) == 1852990827 && *(&v1542 + n) == 1751346277)
                    {
                        _mm_lfence();
                        LOWORD(v1541) = 13056;
                        (Report)(&v1541, (v124 + 2), 0i64);
                        break;
                    }
                }
            }
            ++v144;
            v125 = GetWindowLongA(v117, 4294967280i64);
            if (!(v125 & 0x10000000))
                goto LABEL_406;
            v1184 = v40;
            if (v276 == GetCurrentProcessId())
            {
                *(v57 + v40) = 0;
                v41 = v40 + 1;
            }
            else
            {
                v90 = GetWindowTextW(v117, &v1565, 64i64);
                v306 = WideCharToMultiByte(65001i64, 0i64, &v1565, v90, v57 + v40 + 1, 255, 0i64, 0i64);
                *(v57 + v40) = v306;
                v41 = v40 + v306 + 1;
            }
            v90 = GetClassNameW(v117, &v1565, 64i64);
            v307 = WideCharToMultiByte(65001i64, 0i64, &v1565, v90, v57 + v41 + 1, 255, 0i64, 0i64);
            *(v57 + v41) = v307;
            if (v307
                && *(v57 + v41) == 7
                && *(v57 + v41 + 1) == 1702129486
                && *(v57 + v41 + 5) == 24944
                && *(v57 + v41 + 7) == 100)
            {
                v107 = 1;
            }
            v91 = GetWindowLongA(v117, 4294967276i64);
            GetWindowRect(v117, &v1211);
            if (GetWindowDisplayAffinity
                && GetWindowDisplayAffinity(v117, &v1183 + 4)
                && HIDWORD(v1183)
                && v1211 <= v1240
                && SHIDWORD(v1211) <= SHIDWORD(v1240)
                && v1212 >= v1241
                && v1213 >= SHIDWORD(v1241))
            {
                v125 |= 0x40000000u;
            }
            else if (!(v91 & 0x80000) || !(v91 & 8))
            {
                v39 = v91 | v125;
                if ((v91 | v125) != 349110528
                    && v39 != 885981440
                    && v39 != 351208208
                    && v39 != 888079120
                    && v39 != 351207696
                    && v39 != 888078608
                    && v39 != 386465824
                    && v39 != 386465792
                    && v39 != 369688608
                    && v39 != -1811415008
                    && v39 != -1811414912
                    && v39 != -1677197184
                    && (v39 != 382664960 && v39 != 919535872 || *(&v1541 + 2) != 7236837475466436941i64 && !(v91 & 0x80000))
                    && (v39 != 399442176 || v124)
                    && (v39 & 0xFFFFF) != 763808
                    && (v39 & 0xFFFFF) != 525091
                    && (v39 & 0xFFFFF) != 592421
                    && (v39 & 0xFFFFF) != 592485
                    && v39 != 369754240
                    && v39 != 382337032
                    && (v39 & 0xFFFFF) != 917889
                    && (v39 & 0xFFFFF) != 917632
                    && v39 != -703987584
                    && v39 != -704118527
                    && v39 != 369950752
                    && v39 != -1811414880
                    && v39 != 382664961
                    && v39 != 919535873
                    && v39 != 369950720
                    && v39 != -1811415040
                    && (v39 != -1811939328 || v124)
                    && v39 != 381812992
                    && v39 != 382206208
                    && v39 != 369623168
                    && v39 != 369885184
                    && v39 != 503906464
                    && v39 != -1668808672
                    && v39 != -1677197152
                    && v39 != -1677197276
                    && v39 != -1677197280
                    && v39 != 352913568
                    && v39 != 369229832
                    && v39 != -1677197312
                    && v39 != -737673056
                    && v39 != -1811939312
                    && v39 != -1275068400
                    && v39 != -1803026400
                    && v39 != 504168488
                    && v39 != 336068768
                    && v39 != 336068640
                    && v39 != 336068736
                    && v39 != -1668808160
                    && v39 != -1777663840
                    && v39 != 336136352
                    && v39 != 369754112
                    && v39 != -1777855312
                    && v39 != -1660420096
                    && v39 != 382337288
                    && v39 != 919208200
                    && v39 != 369623200
                    && v39 != -1675689673
                    && v39 != 369754144
                    && v39 != -1675689545
                    && v39 != -1811414496
                    && (!(v91 & 0x80000)
                        || (*(v57 + v41 + 1) != 19785 || *(v57 + v41 + 3) != 69)
                        && *(v57 + v41 + 1) != 1413698381
                        && *(&v1541 + 2) != 7311951802125279554i64
                        && (*(v57 + v41 + 1) != 1802661719 || *(v57 + v41 + 6) != 22386 || !(v39 & 0xF))
                        && v1211 != -1)
                    && v39 != 2617835680
                    && v39 != -1777860576
                    && v39 != -1777860448
                    && v39 != -1676148576
                    && v39 != -1673002848
                    && v39 != -704118752
                    && v91 != 5767328
                    && (v91 & 0x80024) != 524324
                    && v39 != -1642594144
                    && v39 != 470286496
                    && (v39 & 0x9C090020) != -1677131744
                    && v39 != -1803026432
                    && v39 != -1660420064
                    && v39 != -603324384
                    && v39 != 470352032
                    && v39 != -1776746336
                    && v39 != -1773469536
                    && v91 != 786592
                    && v39 != -1642577760
                    && v39 != 474480672
                    && v39 != -1643380576
                    && v39 != 382599425
                    && v39 != 919470337
                    && v39 != -1777793888
                    && v39 != 351011088
                    && v39 != -1676935008
                    && v39 != -1803025760
                    && v39 != -1677196768
                    && v39 != -1677041568
                    && v39 != 349110536
                    && v39 != 885981448)
                {
                    v40 = v1184;
                    goto LABEL_406;
                }
            }
            v42 = v41 + *(v57 + v41) + 1;
            v367 = OpenProcess(4096i64, 0i64, v276);
            v90 = 128;
            v308 = v367
                && v390(v367, 0i64, &v1573, &v90)
                && (v90 = WideCharToMultiByte(65001i64, 0i64, &v1573, v90, v57 + v42 + 1, 255, 0i64, 0i64)) != 0;
            v77 = v308;
            if (v367)
                CloseHandle(v367);
            if (v77)
            {
                if (GetFileAttributesExW(&v1573, 0i64, &v1546))
                    v309 = v1547;
                else
                    v309 = 0;
                v310 = v309;
            }
            else
            {
                v310 = 0;
            }
            if (v77)
                HIDWORD(v276) = v90;
            else
                HIDWORD(v276) = 0;
            *(v57 + v42) = BYTE4(v276);
            v43 = v42 + BYTE4(v276) + 1;
            *(v57 + v43) = v310;
            *(v57 + v43 + 4) = v125;
            *(v57 + v43 + 8) = v91;
            qmemcpy((v57 + v43 + 12), &v1211, 0x10ui64);
            v40 = v43 + 28;
        LABEL_406:
            v117 = GetWindow(v117, 2i64);
            if (v117 && v40 <= 20120)
                continue;
            break;
        }
    }
    *(v57 + 2) = v40 - 4;
    v44 = v40 + 2;
    if (v144 <= 1)
    {
        v139 = 0;
        v140 = 68;
        v141 = v144;
        (Report)(&v139, 3i64, 0i64);
    }
    strcpy(&v226, "DuplicateHandle");
    DuplicateHandle = GetProcAddress(hKernel32, &v226);
    strcpy(&v239, "GetCurrentProcess");
    GetCurrentProcess = GetProcAddress(hKernel32, &v239);
    strcpy(&v212, "NtQueryObject");
    NtQueryObject = GetProcAddress(hNtdll, &v212);
    strcpy(&v168, "_wcsnicmp");
    hMsvcrt_5 = GetModuleHandleA(&v119);
    _wcsnicmp = GetProcAddress(hMsvcrt_5, &v168);
    strcpy(&v205, "GetProcessId");
    GetProcessId = GetProcAddress(hKernel32, &v205);
    v63 = 4294967295;
    v95 = 4294967295;
    v71 = '\0';
    v120 = ' ';
    do
    {
        v120 += 1024;
        v71 = realloc(v71, v120);
        if (!v71)
            break;
        v95 = NtQuerySystemInformation(16i64, v71, v120, &v120);
    } while (v95 == -1073741820);
    if (v71 && v95 >= 0)
    {
        v100 = -1;
        for (ii = 0; *v81 && ii < *v71 && v44 <= 20219; ++ii)
        {
            if (HIWORD(v71[6 * ii + 3]) == hCurrentProcess)
            {
                v1493 = 24i64 * ii;
                if (v71[v1493 / 4 + 2] == GetCurrentProcessId() && v63 && v63 == -1)
                    v63 = 999;
            }
            if (v100 == -1 || LOBYTE(v71[6 * ii + 3]) == v100)
            {
                v1489 = 24i64 * ii;
                if (v71[v1489 / 4 + 2] != GetCurrentProcessId())
                {
                    v405 = OpenProcess(64i64, 0i64, v71[6 * ii + 2]);
                    if (v405)
                    {
                        v32 = GetCurrentProcess();
                        LODWORD(v37) = 1024;
                        if (DuplicateHandle(v405, HIWORD(v71[6 * ii + 3]), v32, &v1206, v37, 0, 0))
                        {
                            if (v100 == -1)
                            {
                                v1094 = 80;
                                v1095 = 114;
                                v1096 = 111;
                                v1097 = 99;
                                v1098 = 101;
                                v1099 = 115;
                                v1100 = 115;
                                v1101 = 0;
                                v95 = NtQueryObject(v1206, 2i64, &v1582, 1024i64, 0i64);
                                if (v95 < 0 || _wcsnicmp(v1583, &v1094, v1582 / 2))
                                {
                                    if (v95 < 0 && v63)
                                        v63 = v95;
                                }
                                else
                                {
                                    v100 = LOBYTE(v71[6 * ii + 3]);
                                }
                            }
                            if (v100 != -1 && (v1185 = GetProcessId(v1206), v1185 == GetCurrentProcessId()) && v71[6 * ii + 6] & 0x30)
                            {
                                v404 = OpenProcess(4096i64, 0i64, v71[6 * ii + 2]);
                                v1576 = 0;
                                v132 = 256;
                                if (v404
                                    && v390(v404, 0i64, &v1576, &v132)
                                    && (v132 = WideCharToMultiByte(65001i64, 0i64, &v1576, v132, v57 + v44 + 1, 255, 0i64, 0i64)) != 0)
                                {
                                    *(v57 + v44) = v132;
                                }
                                else
                                {
                                    v1326 = v71[6 * ii + 2];
                                    v1327 = 0;
                                    v1328 = 512;
                                    v1329 = &v1585;
                                    if (NtQuerySystemInformation(88i64, &v1326, 24i64, 0i64) < 0)
                                    {
                                        *(v57 + v44) = 0;
                                    }
                                    else
                                    {
                                        _mm_lfence();
                                        v1456 = v57 + v44 + 1;
                                        v33 = WideCharToMultiByte(65001i64, 0i64, v1329, v1327 / 2, v1456, 255, 0i64, 0i64);
                                        *(v57 + v44) = v33;
                                    }
                                }
                                if (v404)
                                    CloseHandle(v404);
                                if (*(v57 + v44))
                                {
                                    if (GetFileAttributesExW(&v1576, 0i64, &v1548))
                                        v311 = v1549;
                                    else
                                        v311 = 0;
                                    v312 = v311;
                                }
                                else
                                {
                                    v312 = 0;
                                }
                                v45 = v44 + *(v57 + v44) + 1;
                                *(v57 + v45) = v312;
                                v45 += 4;
                                *(v57 + v45) = v71[6 * ii + 6];
                                v44 = v45 + 4;
                                v63 = 0;
                            }
                            else if (v100 != -1 && HIWORD(v71[6 * ii + 3]) == hCurrentProcess)
                            {
                                v1455 = 24i64 * ii;
                                if (v71[v1455 / 4 + 2] == GetCurrentProcessId())
                                {
                                    if (v63)
                                        v63 = v71[6 * ii + 6];
                                }
                            }
                            CloseHandle(v1206);
                            CloseHandle(v405);
                        }
                        else
                        {
                            CloseHandle(v405);
                            if (HIWORD(v71[6 * ii + 3]) == hCurrentProcess)
                            {
                                v1468 = 24i64 * ii;
                                if (v71[v1468 / 4 + 2] == GetCurrentProcessId())
                                {
                                    if (v63)
                                        v63 = 2;
                                }
                            }
                        }
                    }
                    else if (HIWORD(v71[6 * ii + 3]) == hCurrentProcess)
                    {
                        v1487 = 24i64 * ii;
                        if (v71[v1487 / 4 + 2] == GetCurrentProcessId())
                            v63 = v63 != 0;
                    }
                }
            }
        }
        if (v100 == -1)
            v63 += 200;
    }
    else
    {
        v63 = v95 + 100;
    }
    if (v63)
    {
        *(v57 + v44) = v63;
        v44 += 4;
    }
    if (*(Report + 5) == -858993460 && *(Report + 1377994) == -803035)
        *(Report + 196656) = *(Report + 1377998);
    if (v71)
        free(v71);
    if (*v81)
    {
        *(v57 + *(v57 + 2) + 4) = v44 - 4 - *(v57 + 2) - 2;
        strcpy(&v181, "CreateFileA");
        CreateFileA = GetProcAddress(hKernel32, &v181);
        strcpy(&v206, "GetLastError");
        GetLastError = GetProcAddress(hKernel32, &v206);
        strcpy(&v271, "..\\..\\Content\\Paks\\TslGame-WindowsNoEditor_assets_world.pak");
        if (GetFileAttributesExA(&v271, 0i64, &v1485))
            v277 = v1486;
        else
            v277 = -2;
        *(v57 + v44) = v277;
        if (v277 == -2)
        {
            strcpy(&v167, "ReadFile");
            ReadFile = GetProcAddress(hKernel32, &v167);
            strcpy(&v267, "..\\..\\BLGame\\CookedContent\\Script\\BLGame.u");
            v1205 = CreateFileA(&v267, 0x80000000i64, 7i64, 0i64, 3, 128, 0i64);
            if (v1205 != -1)
            {
                while (ReadFile(v1205, &v1187, 4i64, &v1186, 0i64) && v1186)
                    *(v57 + v44) += v1187;
                CloseHandle(v1205);
            }
        }
        strcpy(&v268, "..\\..\\Content\\Paks\\TslGame-WindowsNoEditor_ui.pak");
        if (GetFileAttributesExA(&v268, 0i64, &v1485))
            v313 = v1486;
        else
            v313 = -2;
        *(v57 + v44 + 4) = v313;
        strcpy(&v269, "..\\..\\Content\\Paks\\TslGame-WindowsNoEditor_sound.pak");
        if (GetFileAttributesExA(&v269, 0i64, &v1485))
            v314 = v1486;
        else
            v314 = -2;
        *(v57 + v44 + 8) = v314;
        v46 = v44 + 12;
        *(v57 + v46) = 0;
        v47 = v46 + 4;
        v278 = 0;
        for (jj = NtQueryVirtualMemory; ; jj = NtReadVirtualMemory)
        {
            while (1)
            {
                while (*jj == 233)
                    jj = (jj + *(jj + 1) + 5);
                if (*jj != 9727)
                    break;
                jj = *(jj + *(jj + 2) + 6);
            }
            v406 = GetModuleHandleA(0i64);
            if (jj < v406)
                break;
            _mm_lfence();
            if (jj >= *(v406 + *(v406 + 60) + 80) + v406)
                break;
            v1188 = v278++;
            if (v1188)
                break;
        }
        if (*GetWindowLongA == 184 || *GetWindowLongA == 47176 || *GetWindowLongA == 195)
            jj = GetWindowLongA;
        strcpy(&v235, "vcruntime140.dll");
        hVcruntime140 = GetModuleHandleA(&v235);
        if (hVcruntime140)
        {
            if ((strcpy(&v153, "memcpy"),
                strcpy(&v160, "memmove"),
                (memcpy_memmove = GetProcAddress(hVcruntime140, &v153)) != 0)
                && *memcpy_memmove == 0x25FF
                || (memcpy_memmove = GetProcAddress(hVcruntime140, &v160)) != 0 && *memcpy_memmove == 0x25FF)
            {
                jj = *(memcpy_memmove + *(memcpy_memmove + 2) + 6);
            }
        }
        strcpy(&v244, "GetCurrentThreadId");
        GetCurrentThreadId = GetProcAddress(hKernel32, &v244);
        if (*GetCurrentThreadId == 0x25FF)
            jj = *(GetCurrentThreadId + *(GetCurrentThreadId + 2) + 6);
        *(v57 + v47) = jj;
        *(v57 + v47 + 8) = *jj;
        *(v57 + v47 + 16) = *(jj + 1);
        *(v57 + v47 + 24) = *(jj + 2);
        v48 = v47 + 32;
        if (v48 <= 1000)
            v315 = 1000;
        else
            v315 = v48;
        (Report)(v57, v315, 0i64);
    }
    free(v57);
    CloseHandle(hCurrentProcess);
    result = *v81;
    if (*v81)
    {
        v80 = 0;
        strcpy(&v259, "CreateToolhelp32Snapshot");
        CreateToolhelp32Shaphot = GetProcAddress(hKernel32, &v259);
        v385 = CreateToolhelp32Shaphot(2i64, 0i64);
        if (v385 != -1)
        {
            strcpy(&v222, "Process32First");
            Process32First = GetProcAddress(hKernel32, &v222);
            v1501 = 304;
            if (Process32First(v385, &v1501))
            {
                strcpy(&v213, "Process32Next");
                Process32Next = GetProcAddress(hKernel32, &v213);
                v147 = 0;
                v280 = 0;
                v146 = 0;
                v281 = 0;
                v282 = 0;
                v50 = 0;
                v106 = 0;
                v1466 = 0;
                strcpy(&v214, "C:\\lizenz.txt");
                v78 = GetFileAttributesExA(&v214, 0i64, &v1485) != 0;
                v74 = v78;
                while (1)
                {
                    v1274 = 0;
                    v1275 = 56;
                    v93 = OpenProcess(4096i64, 0i64, v1502);
                    v49 = 128;
                    v316 = v93
                        && v390(v93, 0i64, &v1574, &v49)
                        && (LODWORD(v38) = 255,
                            (v49 = WideCharToMultiByte(65001i64, 0i64, &v1574, v49, v1276, v38, 0i64, 0i64)) != 0);
                    v67 = v316;
                    if (v316)
                    {
                        strcpy(&v249, "GetFileAttributesExW");
                        GetFileAttributesExW_1 = GetProcAddress(hKernel32, &v249);
                        if (GetFileAttributesExW_1(&v1574, 0i64, &v1550))
                            v317 = v1551;
                        else
                            v317 = 0;
                        v143 = v317;
                    }
                    else
                    {
                        v1465 = GetLastError();
                        v1334 = v1502;
                        v1335 = 0;
                        v1336 = 512;
                        v1337 = &v1586;
                        if (NtQuerySystemInformation(88i64, &v1334, 24i64, 0i64) < 0)
                        {
                            v49 = 0;
                        }
                        else
                        {
                            v1451 = v1276;
                            LODWORD(v38) = 255;
                            v49 = WideCharToMultiByte(65001i64, 0i64, v1337, v1335 / 2, v1276, v38, 0i64, 0i64);
                        }
                        v143 = 0;
                    }
                    *&v1276[v49] = v143;
                    if (v93 && !v67 && v49 && GetLastError() == 31)
                    {
                        strcpy(&v227, "GetProcessTimes");
                        GetProcessTimes = GetProcAddress(hKernel32, &v227);
                        if (GetProcessTimes(v93, &v1202, &v1202, &v1202, &v1202) || GetLastError() != 31)
                        {
                            CloseHandle(v93);
                            v93 = 0i64;
                        }
                        else
                        {
                            CloseHandle(v93);
                            v93 = OpenProcess(4096i64, 0i64, v1502);
                            if (v93)
                            {
                                *&v1276[v49] = 0;
                                (Report)(&v1274, v49 + 6, 0i64);
                            }
                        }
                    }
                    if (v1504 != 1634038867 || v1505 != 2019896941)
                    {
                        if (v1504 != 1935766380 || v1505 != 2019896947)
                        {
                            if (v1504 != 1819310181 || v1505 != 1919251055 || v1506 != 1702389038 || v146)
                            {
                                if (v1504 != 778333539 || v1505 != 30821)
                                {
                                    if (v1504 != 1751348851 || v1505 != 779383663 || !v93 || v50)
                                    {
                                        if (v1504 == 1702129518 && v1505 == 778330480)
                                            v106 = 1;
                                    }
                                    else
                                    {
                                        strcpy(&v264, "NtQueryInformationProcess");
                                        NtQueryInformationProcess = GetProcAddress(hNtdll, &v264);
                                        if (NtQueryInformationProcess(v93, 61i64, &v50, 1i64, 0i64) < 0 || v50 != 81)
                                        {
                                            if (!v50)
                                            {
                                                v1561 = 64i64;
                                                if (NtQueryInformationProcess(v93, 0i64, &v1561, 64i64, 0i64) >= 0)
                                                {
                                                    if (v1562 & 1)
                                                        v50 = 1;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            v50 = 0;
                                        }
                                    }
                                }
                                else
                                {
                                    v281 = v1502;
                                }
                            }
                            else
                            {
                                v146 = v1502;
                            }
                        }
                        else
                        {
                            v280 = v1502;
                        }
                    }
                    else
                    {
                        v147 = v1502;
                    }
                    if (!v49)
                        goto LABEL_712;
                    if (v1502 == GetCurrentProcessId() || v282 >= 10)
                        goto LABEL_679;
                    v53 = 0;
                    v105 = 0;
                    v54 = 0;
                    v145 = v49;
                    v279 = 0;
                    do
                    {
                        if (v1276[--v145] == 92)
                            ++v279;
                    } while (v145);
                    if (v279 > 2)
                        break;
                LABEL_637:
                    strcpy(&v228, "GetProcessTimes");
                    GetProcessTimes_1 = GetProcAddress(hKernel32, &v228);
                    if (!GetProcessTimes_1(v93, &v1199, &v1535, &v1448, &v1447)
                        || (v34 = GetCurrentProcess(), !GetProcessTimes_1(v34, &v1198, &v380, &v380, &v380))
                        || v1198 - v1199 > 900000000
                        || v1198 - v1199 < -300000000)
                    {
                        if (!v53)
                            goto LABEL_679;
                    }
                    v79 = v147 != 0;
                    v1276[v49 + 4] = v147 != 0;
                    if (v146 && v1503 == v146)
                    {
                        v1276[v49 + 4] |= 2u;
                    }
                    else if (v280 && v1503 == v280)
                    {
                        v1276[v49 + 4] |= 8u;
                    }
                    else if (v281 && v1503 == v281)
                    {
                        v1276[v49 + 4] |= 0x10u;
                    }
                    else
                    {
                        v1201 = OpenProcess(4096i64, 0i64, v1503);
                        if (v1201)
                        {
                            strcpy(&v243, "GetExitCodeProcess");
                            GetExitCodeProcess = GetProcAddress(hKernel32, &v243);
                            if (GetExitCodeProcess(v1201, &v1189) && v1189 != 259)
                                v1276[v49 + 4] |= 4u;
                            CloseHandle(v1201);
                        }
                        else if (GetLastError() != 5)
                        {
                            v1276[v49 + 4] |= 4u;
                        }
                    }
                    if (v54 && v74)
                        v1276[v49 + 4] |= 0x20u;
                    if (v1276[v49 + 4] <= 1 && !v53)
                        goto LABEL_679;
                    if (v54)
                    {
                        strcpy(&v255, "QueryProcessCycleTime");
                        QueryProcessCycleTimes = GetProcAddress(hKernel32, &v255);
                        QueryProcessCycleTimes(v93, &v1446);
                    }
                    Sleep(1000i64);
                    ++v282;
                    if (!GetProcessTimes_1(v93, &v380, &v380, &v1277[v49 + 5], (&v1278 + v49)))
                        goto LABEL_679;
                    *&v1277[v49 + 5] -= v1448;
                    *(&v1278 + v49) -= v1447;
                    if (!(v1276[v49 + 4] & 8) && *(&v1278 + v49) + *&v1277[v49 + 5] < 500000i64 && (!v53 || v105))
                    {
                        if (!v54)
                            goto LABEL_679;
                        if (*(&v1278 + v49))
                            goto LABEL_679;
                        if (*&v1277[v49 + 5])
                            goto LABEL_679;
                        if (!QueryProcessCycleTimes(v93, &v1277[v49 + 5]))
                            goto LABEL_679;
                        v1258 = *&v1277[v49 + 5] - v1446;
                        *&v1277[v49 + 5] = v1258;
                        if (v1258 < 100000)
                            goto LABEL_679;
                    }
                    v1275 = 64;
                    *&v1276[v49 + 5] = v1198 - v1199;
                    (Report)(&v1274, v49 + 31, 0i64);
                LABEL_724:
                    if ((v1504 == 1701667143 || v1504 == 1701667175)
                        && (v1505 == 1919252047 || v1505 == 1919252079)
                        && (v1506 == 1434018156 || v1506 == 1970889068))
                    {
                        v80 = 1;
                        v289 = OpenProcess(1024i64, 0i64, v1502);
                        if (v289)
                        {
                            for (kk = 0i64; *v81; kk = v338 + v337)
                            {
                                v320 = (NtQueryVirtualMemory)(v289, kk, 0i64, &v337, 48i64, &v1532);
                                if (v320 < 0)
                                    break;
                                if (v339 == 4096 && v341 == 0x20000 && (v340 == 16 || v340 == 32 || v340 == 64))
                                {
                                    if (v338 > 0x10000)
                                    {
                                        v1285 = 0;
                                        v1286 = 59;
                                        v1287 = v337;
                                        v1288 = v338;
                                        v1289 = v341 | v340 | v339;
                                        (Report)(&v1285, 18i64, 0i64);
                                    }
                                    if (v50)
                                    {
                                        v1370 = 0;
                                        v1371 = 53;
                                        v1372 = 1457;
                                        v1373 = v50;
                                        v1374 = v337;
                                        v1375 = v338;
                                        v1376 = v341 | v340 | v339;
                                        (Report)(&v1370, 28i64, 0i64);
                                    }
                                    v1215 = OpenProcess(16i64, 0i64, v1502);
                                    if (v1215)
                                    {
                                        v1102 = 8;
                                        v1103 = 72;
                                        v1104 = 0;
                                        v1105 = 111;
                                        v1106 = 0;
                                        v1107 = 109;
                                        v1108 = 0;
                                        v1109 = 101;
                                        v1110 = 0;
                                        memset(&v1111, 0, 0x10ui64);
                                        v1112 = 4;
                                        v1113 = 70;
                                        v1114 = 0;
                                        v1115 = 49;
                                        v1116 = 0;
                                        memset(&v1117, 0, 0x14ui64);
                                        v1118 = 16;
                                        v1119 = -1;
                                        v1120 = -1;
                                        v1121 = -125;
                                        v1122 = -60;
                                        v1123 = 8;
                                        v1124 = -61;
                                        v1125 = 0;
                                        v1126 = 0;
                                        v1127 = 0;
                                        v1128 = 0;
                                        v1129 = 0;
                                        v1130 = 0;
                                        v1131 = 0;
                                        v1132 = 0;
                                        v1133 = 0;
                                        v1134 = 0;
                                        memset(&v1135, 0, 8ui64);
                                        v1136 = 24;
                                        v1137 = 92;
                                        v1138 = 0;
                                        v1139 = 92;
                                        v1140 = 0;
                                        v1141 = 46;
                                        v1142 = 0;
                                        v1143 = 92;
                                        v1144 = 0;
                                        v1145 = 112;
                                        v1146 = 0;
                                        v1147 = 105;
                                        v1148 = 0;
                                        v1149 = 112;
                                        v1150 = 0;
                                        v1151 = 101;
                                        v1152 = 0;
                                        v1153 = 92;
                                        v1154 = 0;
                                        v1155 = 37;
                                        v1156 = 0;
                                        v1157 = 115;
                                        v1158 = 0;
                                        v1159 = 0;
                                        v1160 = 0;
                                        v1161 = 10;
                                        v1162 = -57;
                                        v1163 = 6;
                                        v1164 = 0;
                                        v1165 = 0;
                                        v1166 = 0;
                                        v1167 = 0;
                                        v1168 = -58;
                                        v1169 = 71;
                                        v1170 = 3;
                                        v1171 = 0;
                                        memset(&v1172, 0, 0xEui64);
                                        v1173 = 8;
                                        v1174 = 105;
                                        v1175 = -64;
                                        v1176 = 24;
                                        v1177 = 1;
                                        v1178 = 0;
                                        v1179 = 0;
                                        v1180 = 51;
                                        v1181 = -46;
                                        memset(&v1182, 0, 0x10ui64);
                                        v134 = 0;
                                        for (ll = v337; *v81 && ll != v338 + v337; ll += 4096i64)
                                        {
                                            if ((NtReadVirtualMemory)(v1215, ll, &v1589, 4096i64, 0i64) >= 0)
                                            {
                                                for (mm = 0; mm < 6; ++mm)
                                                {
                                                    for (nn = 0; (*(&v1102 + 7 * mm) + nn) <= 0x1000ui64; ++nn)
                                                    {
                                                        for (i1 = 0;
                                                            i1 < *(&v1102 + 7 * mm) && *(&v1589 + (i1 + nn)) == *(&v1102 + 28 * mm + i1 + 4);
                                                            ++i1)
                                                        {
                                                            ;
                                                        }
                                                        if (i1 == *(&v1102 + 7 * mm))
                                                        {
                                                            v1377 = 0;
                                                            v1378 = 53;
                                                            v1379 = 1388;
                                                            v1380 = nn + ll;
                                                            v1381 = v337;
                                                            v1382 = v338;
                                                            v1383 = v341 | v340 | v339;
                                                            (Report)(&v1377, 28i64, 0i64);
                                                            goto LABEL_770;
                                                        }
                                                    }
                                                }
                                                if (v338 <= 0x10000)
                                                {
                                                    for (i2 = 0; i2 < 0xFFC; ++i2)
                                                    {
                                                        if (*(&v1589 + i2) == 233
                                                            && i2 + ll + *(&v1589 + i2 + 1) + 5 >= v337
                                                            && i2 + ll + *(&v1589 + i2 + 1) + 5 < v338 + v337)
                                                        {
                                                            v1190 = v134++;
                                                            if (!v1190)
                                                            {
                                                                v1323 = i2 + ll - v337;
                                                                v1324 = *(&v1589 + i2);
                                                                v1325 = *(&v1590 + i2);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    LABEL_770:
                                        if (v134 >= 100)
                                        {
                                            v1320 = 0;
                                            v1321 = 59;
                                            v1322 = v134 + v338;
                                            (Report)(&v1320, 24i64, 0i64);
                                        }
                                        CloseHandle(v1215);
                                    }
                                }
                            }
                            if (v320 == -1073741790)
                            {
                                v345 = 0;
                                v346 = 59;
                                v347 = -1073741790;
                                (Report)(&v345, 6i64, 0i64);
                            }
                            CloseHandle(v289);
                        }
                        else if (GetLastError() == 5)
                        {
                            v121 = 0;
                            v122 = 59;
                            (Report)(&v121, 2i64, 0i64);
                            hCurrentProcess = OpenProcess(4096i64, 0i64, v1502);
                            if (hCurrentProcess)
                            {
                                strcpy(&v263, "NtQueryInformationProcess");
                                NtQueryInformationProcess_1 = GetProcAddress(hNtdll, &v263);
                                v62 = 0;
                                if (NtQueryInformationProcess_1(hCurrentProcess, 61i64, &v62, 1i64, 0i64) < 0)
                                {
                                    _mm_lfence();
                                    v1563 = 64i64;
                                    if (NtQueryInformationProcess_1(hCurrentProcess, 0i64, &v1563, 64i64, 0i64) >= 0)
                                    {
                                        if (v1564 & 1)
                                            v62 = 1;
                                    }
                                }
                                if (v62)
                                {
                                    v342 = 0;
                                    v343 = 59;
                                    v344 = v62 + 4096;
                                    (Report)(&v342, 6i64, 0i64);
                                }
                                CloseHandle(hCurrentProcess);
                            }
                        }
                        v289 = OpenProcess(16i64, 0i64, v1502);
                        if (v289)
                        {
                            if ((NtReadVirtualMemory)(v289, 0i64, &v272, 1i64, 0i64) == -1073741790)
                            {
                                v360 = 0;
                                v361 = 59;
                                v362 = -1073741790;
                                (Report)(&v360, 6i64, 0i64);
                            }
                            CloseHandle(v289);
                        }
                        v383 = 0i64;
                        v382 = CreateToolhelp32Shaphot(24i64, v1502);
                        if (v382 != -1)
                        {
                            strcpy(&v215, "Module32First");
                            Module32First = GetProcAddress(hKernel32, &v215);
                            v1554 = 568;
                            if (Module32First(v382, &v1554))
                            {
                                strcpy(&v207, "Module32Next");
                                Module32Next = GetProcAddress(hKernel32, &v207);
                                do
                                {
                                    if ((v1557 != 1769301878 || v1558 != 779312946) && (v1557 != 1230325590 || v1558 != 777215794))
                                    {
                                        if (v1557 == 1701667175 && v1558 == 1919252079 && v1559 == 1970889068 && v1560 == 1818504809)
                                        {
                                            v162 = OpenProcess(1040i64, 0i64, v1502);
                                            if (v162)
                                            {
                                                if ((NtReadVirtualMemory)(v162, v1555 + 450613, &v430, 16i64, 0i64) >= 0
                                                    && *&v430 == -5130500736015824128i64
                                                    && v432 == -858993469)
                                                {
                                                    _mm_lfence();
                                                    if ((NtReadVirtualMemory)(v162, v431, &v430, 4i64, 0i64) >= 0)
                                                    {
                                                        _mm_lfence();
                                                        if ((NtReadVirtualMemory)(v162, v430, &v430, 20i64, 0i64) >= 0)
                                                        {
                                                            for (i3 = 0; i3 < 0x14; i3 += 4)
                                                            {
                                                                _mm_lfence();
                                                                (NtReadVirtualMemory)(v162, *(&v430 + i3), &v1314, 16i64, 0i64);
                                                                if (*(&v430 + i3) < v1555 || *(&v430 + i3) >= v1556 + v1555 || v1314 == 204)
                                                                {
                                                                    v1310 = 0;
                                                                    v1311 = 59;
                                                                    v1312 = i3;
                                                                    v1313 = *(&v430 + i3);
                                                                    (Report)(&v1310, 24i64, 0i64);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                v1279 = 4;
                                                v1280 = -1;
                                                v1281 = 16;
                                                v1282 = -124;
                                                v1283 = -64;
                                                memset(&v1284, 0, 0x14ui64);
                                                for (i4 = v1555; *v81; i4 = v1222 + v1220)
                                                {
                                                    if (i4 >= v1556 + v1555)
                                                        break;
                                                    _mm_lfence();
                                                    if ((NtQueryVirtualMemory)(v162, i4, 0i64, &v1220, 48i64, &v1536) < 0)
                                                        break;
                                                    if (v1223 == 4096 && (v1224 == 16 || v1224 == 32 || v1224 == 64))
                                                    {
                                                        for (i5 = v1220; *v81 && i5 != v1222 + v1220; i5 += 4096i64)
                                                        {
                                                            if ((NtReadVirtualMemory)(v162, i5, &v1591, 4096i64, 0i64) >= 0)
                                                            {
                                                                for (i6 = 0; i6 < 1; ++i6)
                                                                {
                                                                    for (i7 = 0; (*(&v1279 + 7 * i6) + i7) <= 0x1000ui64; ++i7)
                                                                    {
                                                                        for (i8 = 0;
                                                                            i8 < *(&v1279 + 7 * i6)
                                                                            && *(&v1591 + (i8 + i7)) == *(&v1279 + 28 * i6 + i8 + 4);
                                                                            ++i8)
                                                                        {
                                                                            ;
                                                                        }
                                                                        if (i8 == *(&v1279 + 7 * i6))
                                                                        {
                                                                            v1391 = 0;
                                                                            v1392 = 53;
                                                                            v1393 = 1388;
                                                                            v1394 = i7 + i5;
                                                                            v1395 = v1220;
                                                                            v1396 = v1222;
                                                                            v1397 = v1225 | v1224 | v1223;
                                                                            (Report)(&v1391, 28i64, 0i64);
                                                                            goto LABEL_873;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (v1222 == 0x2000)
                                                        {
                                                            v1398 = 0;
                                                            v1399 = 53;
                                                            v1400 = 1388;
                                                            v1401 = v1221;
                                                            v1402 = v1220;
                                                            v1403 = 0x2000;
                                                            v1404 = v1225 | v1224 | v1223;
                                                            (Report)(&v1398, 28i64, 0i64);
                                                        }
                                                    }
                                                LABEL_873:
                                                    ;
                                                }
                                                CloseHandle(v162);
                                            }
                                            v383 = v1555;
                                            v1191 = v1556;
                                        }
                                    }
                                    else
                                    {
                                        v137 = OpenProcess(1040i64, 0i64, v1502);
                                        if (v137)
                                        {
                                            if ((NtReadVirtualMemory)(v137, v1555 + 294918, &v1566, 30i64, 0i64) >= 0)
                                            {
                                                if (*&v1566 != -8422761549041827734i64
                                                    || v1567 != 13
                                                    || v1569 != 38655
                                                    || v1570 != 3467
                                                    || v1571 != -1862336117)
                                                {
                                                    _mm_lfence();
                                                    if ((NtReadVirtualMemory)(v137, v1555 + 294888, &v1566, 8i64, 0i64) >= 0
                                                        && *&v1566 == 29839001828066410i64)
                                                    {
                                                        _mm_lfence();
                                                        v1459 = 0;
                                                        v1460 = 59;
                                                        v1461 = 0;
                                                        v1462 = v1555 + 294952;
                                                        (NtReadVirtualMemory)(v137, v1555 + 294952, &v1463, 16i64, 0i64);
                                                        (Report)(&v1459, 24i64, 0i64);
                                                    }
                                                }
                                                else
                                                {
                                                    _mm_lfence();
                                                    if ((NtReadVirtualMemory)(v137, v1568, &v1566, 4i64, 0i64) >= 0)
                                                    {
                                                        _mm_lfence();
                                                        if ((NtReadVirtualMemory)(v137, v1566, &v1566, 4i64, 0i64) >= 0)
                                                        {
                                                            _mm_lfence();
                                                            if ((NtReadVirtualMemory)(v137, v1566, &v1566, 984i64, 0i64) >= 0)
                                                            {
                                                                for (i9 = 0; i9 < 0x3D8; i9 += 4)
                                                                {
                                                                    _mm_lfence();
                                                                    (NtReadVirtualMemory)(v137, *(&v1566 + i9), &v1319, 16i64, 0i64);
                                                                    if (*(&v1566 + i9) < v1555 || *(&v1566 + i9) >= v1556 + v1555 || v1319 == 204)
                                                                    {
                                                                        v1315 = 0;
                                                                        v1316 = 59;
                                                                        v1317 = i9;
                                                                        v1318 = *(&v1566 + i9);
                                                                        (Report)(&v1315, 24i64, 0i64);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            for (i10 = v1555; i10 < v1556 + v1555; i10 = v1340 + v1338)
                                            {
                                                _mm_lfence();
                                                if ((NtQueryVirtualMemory)(v137, i10, 0i64, &v1338, 48i64, &v1533) < 0)
                                                    break;
                                                if ((v1342 == 16 || v1342 == 32 || v1342 == 64) && v1340 == 4096)
                                                {
                                                    v1384 = 0;
                                                    v1385 = 53;
                                                    v1386 = 1388;
                                                    v1387 = v1338 - v1339;
                                                    v1388 = v1338;
                                                    v1389 = 4096;
                                                    v1390 = v1343 | v1342 | v1341;
                                                    (Report)(&v1384, 28i64, 0i64);
                                                }
                                            }
                                            CloseHandle(v137);
                                        }
                                    }
                                } while (*v81 && Module32Next(v382, &v1554));
                            }
                            CloseHandle(v382);
                        }
                        v384 = CreateToolhelp32Shaphot(4i64, 0i64);
                        if (v384 != -1)
                        {
                            strcpy(&v216, "Thread32First");
                            Thread32First = GetProcAddress(hKernel32, &v216);
                            v1522 = 28;
                            if (Thread32First(v384, &v1522))
                            {
                                strcpy(&v185, "Thread32Next");
                                Thread32Next = GetProcAddress(hKernel32, &v185);
                                do
                                {
                                    if (v1524 == v1502)
                                    {
                                        strcpy(&v175, "OpenThread");
                                        OpenThread = GetProcAddress(hKernel32, &v175);
                                        v336 = OpenThread(10i64, 0i64, v1523);
                                        if (v336)
                                        {
                                            strcpy(&v201, "ResumeThread");
                                            ResumeThread = GetProcAddress(hKernel32, &v201);
                                            v283 = ResumeThread(v336);
                                            if (v283 && v283 != -1)
                                            {
                                                strcpy(&v217, "SuspendThread");
                                                SuspendThread = GetProcAddress(hKernel32, &v217);
                                                SuspendThread(v336);
                                                v348 = 0;
                                                v349 = 59;
                                                v350 = v283;
                                                (Report)(&v348, 6i64, 0i64);
                                            }
                                            v1578 = 1048593;
                                            strcpy(&v231, "GetThreadContext");
                                            GetThreadContext = GetProcAddress(hKernel32, &v231);
                                            for (i11 = 0; *v81 && i11 < 100; ++i11)
                                            {
                                                if (GetThreadContext(v336, &v1577))
                                                {
                                                    if (v1580)
                                                    {
                                                        v351 = 0;
                                                        v352 = 59;
                                                        v353 = v1579;
                                                        (Report)(&v351, 6i64, 0i64);
                                                    }
                                                    v294 = OpenProcess(1040i64, 0i64, v1502);
                                                    if (v294)
                                                    {
                                                        if ((NtReadVirtualMemory)(v294, v1581, &v1572, 512i64, 0i64) >= 0)
                                                        {
                                                            for (i12 = 0; i12 < 0x80; ++i12)
                                                            {
                                                                if (*(&v1572 + i12) < v383
                                                                    || *(&v1572 + i12) >= v1191 + v383
                                                                    || (_mm_lfence(), (NtReadVirtualMemory)(v294, *(&v1572 + i12), &v1093, 16i64, 0i64) < 0)
                                                                    || *&v1093 != 9215)
                                                                {
                                                                    _mm_lfence();
                                                                    if ((NtQueryVirtualMemory)(v294, *(&v1572 + i12), 0i64, &v1525, 48i64, &v1537) >= 0
                                                                        && v1528 == 4096
                                                                        && v1530 == 0x20000
                                                                        && (v1529 == 16 || v1529 == 32 || v1529 == 64)
                                                                        && v1527 == 4096)
                                                                    {
                                                                        _mm_lfence();
                                                                        if ((NtReadVirtualMemory)(v294, *(&v1572 + i12), &v1093, 16i64, 0i64) >= 0
                                                                            && v1093 == 233)
                                                                        {
                                                                            v1089 = 0;
                                                                            v1090 = 59;
                                                                            v1091 = i12;
                                                                            v1092 = *(&v1572 + i12) - v1526;
                                                                            (Report)(&v1089, 24i64, 0i64);
                                                                        }
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    v1089 = 0;
                                                                    v1090 = 59;
                                                                    v1091 = i12;
                                                                    v1092 = *(&v1572 + i12) - v383;
                                                                    (Report)(&v1089, 24i64, 0i64);
                                                                }
                                                            }
                                                        }
                                                        CloseHandle(v294);
                                                    }
                                                }
                                                Sleep(10i64);
                                            }
                                            CloseHandle(v336);
                                        }
                                    }
                                } while (*v81 && Thread32Next(v384, &v1522));
                            }
                            CloseHandle(v384);
                        }
                    }
                    if (v1504 == 1684960626 && v1505 == 842230892)
                    {
                        v1193 = OpenProcess(1024i64, 0i64, v1502);
                        if (v1193)
                        {
                            for (i13 = 0i64;
                                *v81 && (NtQueryVirtualMemory)(v1193, i13, 0i64, &v1344, 48i64, &v1531) >= 0;
                                i13 = v1345 + v1344)
                            {
                                if (v1346 == 4096 && v1348 == 0x40000 && (v1347 == 16 || v1347 == 32 || v1347 == 64) && v1345 > 0x10000)
                                {
                                    v1290 = 0;
                                    v1291 = 66;
                                    v1292 = v1344;
                                    v1293 = v1345;
                                    v1294 = v1348 | v1347 | v1346;
                                    (Report)(&v1290, 18i64, 0i64);
                                }
                            }
                            CloseHandle(v1193);
                        }
                    }
                    if (!*v81 || !Process32Next(v385, &v1501))
                        goto LABEL_936;
                }
                for (i14 = 0; i14 < v49 - 6; ++i14)
                {
                    if (*&v1276[i14] != 1936016476 || *&v1276[i14 + 4] != 1886352491 || v1277[i14] != 92)
                    {
                        v318 = *&v1276[i14] == 1852405596 && *&v1276[i14 + 4] == 779249014;
                        v53 = v318;
                        if (!v318
                            && (*&v1276[i14] != 1818838620 || *&v1276[i14 + 4] != 1667584613)
                            && (*&v1276[i14] != 1668236380
                                || *&v1276[i14 + 4] != 1852140917
                                || *&v1277[i14] != 29556
                                || v1277[i14 + 2] != 92)
                            && (*&v1276[i14] != 2003780700
                                || *&v1276[i14 + 4] != 1634692206
                                || *&v1277[i14] != 29540
                                || v1277[i14 + 2] != 92)
                            && (*&v1276[i14] != 1634685532 || *&v1276[i14 + 4] != 1735289197 || v1277[i14] != 92)
                            && (*&v1276[i14] != 779119988 || *&v1276[i14 + 4] != 30821)
                            && (*&v1276[i14] != 1702129518 || *&v1276[i14 + 4] != 778330480)
                            && (*&v1276[i14] != 774778460 || *&v1276[i14 + 4] != 23598)
                            && (*&v1276[i14] != 778333539 || *&v1276[i14 + 4] != 30821)
                            && (*&v1276[i14] != 1852401001 || *&v1276[i14 + 4] != 1818326131)
                            && (*&v1276[i14] != 2003002212 || *&v1276[i14 + 4] != 1702389038))
                        {
                            v319 = *&v1276[i14] == 1684960626 && *&v1276[i14 + 4] == 842230892;
                            v54 = v319;
                            if (!v319 && (*&v1276[i14] != 1835357276 || *&v1276[i14 + 4] != 23664) && v67)
                                continue;
                        }
                    }
                    if (v54 && v74)
                        v53 = 1;
                    goto LABEL_637;
                }
            LABEL_679:
                if (!v147
                    || *(&QueryProcessCycleTimes + v49 + 6) != 1819310181
                    || *&v1273[v49] != 1919251055
                    || *&v1273[v49 + 4] != 1702389038
                    || v1503 != v147)
                {
                    if (*(&QueryProcessCycleTimes + v49 + 5) != 1886217556
                        || *&v1273[v49 + 4] != 1701603654
                        || v1505 != 1702389038
                        || (v1504 < 65 || v1504 > 90)
                        && (SBYTE1(v1504) < 65 || SBYTE1(v1504) > 90)
                        && (SBYTE2(v1504) < 65 || SBYTE2(v1504) > 90)
                        && (SHIBYTE(v1504) < 65 || SHIBYTE(v1504) > 90))
                    {
                        if (*&v1273[v49 + 2] != 1700026952)
                        {
                            for (i15 = 0; i15 < v49 - 4; ++i15)
                            {
                                if (*&v1276[i15] == 543649362
                                    || *&v1276[i15] == 41191 && v1276[i15 + 2] == -127 && v1276[i15 + 3] >= 48 && v1276[i15 + 3] <= 57
                                    || *&v1276[i15] == 541544018
                                    || *&v1276[i15] == -1864023211
                                    || *&v1276[i15] == 775302706 && *&v1276[i15 + 4] == 30821
                                    || *&v1276[i15] == -425161754 && *&v1276[i15 + 4] == -1125537099)
                                {
                                    goto LABEL_721;
                                }
                            }
                        LABEL_712:
                            if ((v1504 != 1684107084 || v1505 != 1919052140)
                                && v1504 != 543649362
                                && (v143 != 382752
                                    || v1504 == 1701667143 && v1505 == 1919252047
                                    || v1504 == 1701667175 && v1505 == 1919252079)
                                && v143 != 11478528)
                            {
                            LABEL_722:
                                if (v93)
                                    CloseHandle(v93);
                                goto LABEL_724;
                            }
                        }
                    }
                    else
                    {
                        *v1276 = v1504;
                        *&v1276[4] = v1505;
                        v49 = 8;
                        *v1277 = 255;
                    }
                }
            LABEL_721:
                v1275 = 56;
                (Report)(&v1274, v49 + 6, 0i64);
                goto LABEL_722;
            }
        LABEL_936:
            CloseHandle(v385);
            if (v50)
            {
                v386 = 0;
                v387 = 72;
                v388 = 1457;
                v389 = v50;
                (Report)(&v386, 8i64, 0i64);
            }
        }
        result = *v81;
        if (*v81)
        {
            strcpy(&v200, "LoadLibraryA");
            LoadLibraryA = GetProcAddress(hKernel32, &v200);
            strcpy(&v170, "psapi.dll");
            hPsapi = LoadLibraryA(&v170);
            if (hPsapi)
            {
                strcpy(&v218, "EnumProcesses");
                EnumProcesses = GetProcAddress(hPsapi, &v218);
                if (EnumProcesses(&v1588, 1600i64, &v136))
                {
                    if (v136 < 0x640ui64)
                    {
                        for (i16 = 0; ; i16 += 4)
                        {
                            if (!*v81 || i16 >= 0x10000)
                                goto LABEL_989;
                            _mm_lfence();
                            v138 = OpenProcess(4096i64, 0i64, i16);
                            if (v138)
                            {
                                _mm_lfence();
                                v1538 = 0;
                                v1539 = 56;
                                v55 = 128;
                                if (!v390(v138, 0i64, &v1575, &v55)
                                    || (LODWORD(v38) = 255,
                                        (v55 = WideCharToMultiByte(65001i64, 0i64, &v1575, v55, v1540, v38, 0i64, 0i64)) == 0))
                                {
                                    v1330 = i16;
                                    v1331 = 0;
                                    v1332 = 512;
                                    v1333 = &v1587;
                                    if (NtQuerySystemInformation(88i64, &v1330, 24i64, 0i64) < 0)
                                    {
                                        v55 = 0;
                                    }
                                    else
                                    {
                                        v1492 = v1540;
                                        LODWORD(v38) = 255;
                                        v55 = WideCharToMultiByte(65001i64, 0i64, v1333, v1331 / 2, v1540, v38, 0i64, 0i64);
                                    }
                                }
                                for (i17 = 0; ; ++i17)
                                {
                                    v1478 = i17;
                                    if (i17 >= v136 / 4ui64 || *(&v1588 + i17) == i16)
                                        break;
                                }
                                if (v55)
                                {
                                    if (!v80
                                        && (*(&v1536 + v55 + 1) == 1701667143 || *(&v1536 + v55 + 1) == 1701667175)
                                        && (*(&v1536 + v55 + 5) == 1919252047 || *(&v1536 + v55 + 5) == 1919252079)
                                        && (*(&v1537 + v55 + 1) == 1434018156 || *(&v1537 + v55 + 1) == 1970889068)
                                        || (v1491 = i17, i17 == v136 / 4ui64)
                                        && *(&v1536 + v55) == 1634038899
                                        && *(&v1536 + v55 + 4) == 1650816877)
                                    {
                                        strcpy(&v242, "GetExitCodeProcess");
                                        GetExitCodeProcess_1 = GetProcAddress(hKernel32, &v242);
                                        if (GetExitCodeProcess_1(v138, &v1197))
                                        {
                                            if (v1197 == 259)
                                            {
                                                strcpy(&v229, "GetProcessTimes");
                                                GetProcessTimes_2 = GetProcAddress(hKernel32, &v229);
                                                if (GetProcessTimes_2(v138, &v1484, &v331, &v331, &v331)
                                                    && (hCurrentProcess_1 = GetCurrentProcess(),
                                                        GetProcessTimes_2(hCurrentProcess_1, &v1488, &v331, &v331, &v331)))
                                                {
                                                    *&v1540[v55] = ((v1484 - v1488) / 10000) & 0xFFFFFFFE;
                                                }
                                                else
                                                {
                                                    *&v1540[v55] = 0;
                                                }
                                                if (*&v1540[v55] >= 0)
                                                {
                                                    v1483 = i17;
                                                    v321 = i17 == v136 / 4ui64;
                                                    *&v1540[v55] |= v321;
                                                    (Report)(&v1538, v55 + 6, 0i64);
                                                }
                                            }
                                        }
                                        else
                                        {
                                            *&v1540[v55] = GetLastError();
                                            (Report)(&v1538, v55 + 6, 0i64);
                                        }
                                    }
                                }
                                v1477 = i17;
                                v36 = v136 % 4ui64;
                                if (i17 != v136 / 4ui64)
                                    goto LABEL_987;
                                strcpy(&v230, "GetProcessTimes");
                                GetProcessTimes_3 = GetProcAddress(hKernel32, &v230);
                                if (GetProcessTimes_3(v138, &v1219, &v1219, &v1219, &v1219) || GetLastError() != 31)
                                {
                                    CloseHandle(v138);
                                    continue;
                                }
                                CloseHandle(v138);
                                v138 = OpenProcess(4096i64, 0i64, i16);
                                if (v138)
                                    break;
                            }
                        LABEL_943:
                            ;
                        }
                        if (v55)
                        {
                            if (GetFileAttributesExW(&v1575, 0i64, &v1552))
                                v285 = v1553;
                            else
                                v285 = 0;
                            *&v1540[v55] = v285;
                            (Report)(&v1538, v55 + 6, 0i64);
                        }
                    LABEL_987:
                        (CloseHandle)(v138, v36);
                        goto LABEL_943;
                    }
                }
            }
        LABEL_989:
            strcpy(&v174, "BE_DLL.dll");
            if (GetFileAttributesExA(&v174, 0i64, &v1485))
            {
                v354 = 0;
                v355 = 61;
                v356 = v1486;
                (Report)(&v354, 6i64, 0i64);
            }
            strcpy(&v166, "\\\\.\\Beep");
            LODWORD(v37) = 3;
            v327 = CreateFileA(&v166, 0x80000000i64, 3i64, 0i64, v37, 0, 0i64);
            if (v327 != -1)
            {
                v130 = 0;
                v131 = 62;
                (Report)(&v130, 2i64, 0i64);
                CloseHandle(v327);
            }
            strcpy(&v165, "\\\\.\\Null");
            v327 = CreateFileA(&v165, 0x80000000i64, 3i64, 0i64, 3, 0, 0i64);
            if (v327 != -1)
            {
                v128 = 0;
                v129 = 63;
                (Report)(&v128, 2i64, 0i64);
                CloseHandle(v327);
            }
            result = *v81;
            if (*v81)
            {
                v1214 = GetTickCount();
                Sleep(1000i64);
                v322 = GetTickCount() - v1214;
                if (v322 >= 0x4B0)
                {
                    v357 = 0;
                    v358 = 69;
                    v359 = v322;
                    (Report)(&v357, 6i64, 0i64);
                }
                strcpy(&v270, "..\\..\\Plugins\\ZipUtility\\ThirdParty\\7zpp\\dll\\Win64\\7z.dll");
                hModule = GetModuleHandleA(&v270);
                if (hModule && *(hModule + 4104) != -2092412088)
                {
                    v1300 = 0;
                    v1301 = 70;
                    v1302 = 0;
                    v1303 = *(hModule + 4104);
                    v1304 = *(hModule + 4112);
                    (Report)(&v1300, 19i64, 0i64);
                }
                strcpy(&v157, "hal.dll");
                hModule = GetModuleHandleA(&v157);
                if (hModule)
                {
                    v1295 = 0;
                    v1296 = 70;
                    v1297 = 2;
                    v1298 = *(hModule + 4096);
                    v1299 = *(hModule + 4104);
                    (Report)(&v1295, 19i64, 0i64);
                }
                strcpy(&v241, "nvToolsExt64_1.dll");
                hModule = GetModuleHandleA(&v241);
                if (hModule)
                {
                    v392 = 0;
                    v393 = 72;
                    v394 = 1448;
                    v395 = *(hModule + *(hModule + 60) + 80);
                    (Report)(&v392, 8i64, 0i64);
                }
                strcpy(&v238, "ws2detour_x96.dll");
                hModule = GetModuleHandleA(&v238);
                if (hModule)
                {
                    v396 = 0;
                    v397 = 72;
                    v398 = 1461;
                    v399 = *(hModule + *(hModule + 60) + 80);
                    (Report)(&v396, 8i64, 0i64);
                }
                strcpy(&v240, "networkdllx64.dll");
                hModule = GetModuleHandleA(&v240);
                if (hModule)
                {
                    if (*(hModule + *(hModule + 60) + 80) < 0x200000u || *(hModule + *(hModule + 60) + 80) >= 0x400000u)
                    {
                        if (*(*(hModule + 60) + hModule + 172) == 6944)
                        {
                            v407 = 0;
                            v408 = 72;
                            v409 = 1463;
                            v410 = *(hModule + *(hModule + 60) + 8);
                            (Report)(&v407, 8i64, 0i64);
                        }
                    }
                    else
                    {
                        v400 = 0;
                        v401 = 72;
                        v402 = 1463;
                        v403 = *(*(hModule + 60) + hModule + 172);
                        (Report)(&v400, 8i64, 0i64);
                    }
                }
                strcpy(&v236, "nxdetours_64.dll");
                hModule = GetModuleHandleA(&v236);
                if (hModule)
                {
                    v411 = 0;
                    v412 = 72;
                    v413 = 1464;
                    v414 = *(hModule + *(hModule + 60) + 80);
                    (Report)(&v411, 8i64, 0i64);
                }
                strcpy(&v219, "nvcompiler.dll");
                hModule = GetModuleHandleA(&v219);
                if (hModule)
                {
                    v415 = 0;
                    v416 = 72;
                    v417 = 1468;
                    v418 = *(hModule + 4096);
                    (Report)(&v415, 8i64, 0i64);
                }
                strcpy(&v182, "iphlpapi.dll");
                hModule = LoadLibraryA(&v182);
                if (hModule)
                {
                    strcpy(&v245, "GetExtendedTcpTable");
                    GetExtendedTcpTable = GetProcAddress(hModule, &v245);
                    memset(&v1510, 0, 0x14ui64);
                    for (i18 = 0; *v81 && i18 < 500; ++i18)
                    {
                        _mm_lfence();
                        v287 = 0;
                        GetExtendedTcpTable(0i64, &v287, 0i64, 2i64, 8, 0);
                        v115 = malloc(v287);
                        if (!GetExtendedTcpTable(v115, &v287, 0i64, 2i64, 8, 0))
                        {
                            for (i19 = 0; i19 < *v115; ++i19)
                            {
                                if (v115[40 * i19 + 6] == 20480)
                                {
                                    _mm_lfence();
                                    v1251 = OpenProcess(4096i64, 0i64, v115[40 * i19 + 7]);
                                    if (v1251)
                                    {
                                        _mm_lfence();
                                        CloseHandle(v1251);
                                    }
                                    else if (GetLastError() == 87)
                                    {
                                        v1252 = MEMORY[0x7FFE0014];
                                        if (MEMORY[0x7FFE0014] - *&v115[40 * i19 + 8] <= 1000000i64)
                                        {
                                            for (i20 = 0; i20 < 10 && v115[40 * i19 + 4] != *(&v1510 + i20); ++i20)
                                            {
                                                if (!*(&v1510 + i20))
                                                {
                                                    v1233 = 0;
                                                    v1234 = 72;
                                                    v1235 = 1465;
                                                    v1236 = v115[40 * i19 + 7];
                                                    v1237 = v115[40 * i19 + 4];
                                                    v1238 = v115[40 * i19 + 5];
                                                    v1239 = v1252 - v115[40 * i19 + 8];
                                                    (Report)(&v1233, 18i64, 0i64);
                                                    *(&v1510 + i20) = v115[40 * i19 + 4];
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        free(v115);
                        Sleep(10i64);
                    }
                }
                strcpy(&v164, "wmp.dll");
                hModule = GetModuleHandleA(&v164);
                if (hModule)
                {
                    v420 = 0;
                    v421 = 72;
                    v422 = 1470;
                    v423 = *(hModule + 4096);
                    (Report)(&v420, 8i64, 0i64);
                }
                strcpy(&v183, "Project1.dll");
                hModule = GetModuleHandleA(&v183);
                if (hModule)
                {
                    v424 = 0;
                    v425 = 72;
                    v426 = 1480;
                    v427 = *(hModule + *(hModule + 60) + 8);
                    (Report)(&v424, 8i64, 0i64);
                }
                strcpy(&v254, "TexlnputFramework.dll");
                strcpy(&v224, "__Internal.dll");
                hModule = GetModuleHandleA(&v254);
                if (hModule || (hModule = GetModuleHandleA(&v224)) != 0)
                {
                    v1405 = 0;
                    v1406 = 53;
                    v1407 = 1482;
                    v428 = (*(hModule + 60) + hModule);
                    v1408 = v428[2];
                    v1409 = v428[20];
                    v1410 = v428[10];
                    v1411 = v428[43];
                    (Report)(&v1405, 28i64, 0i64);
                }
                strcpy(&v237, "DxtoryMM_x64.dll");
                strcpy(&v169, "mslib.dll");
                hModule = GetModuleHandleA(&v237);
                if (hModule || (hModule = GetModuleHandleA(&v169)) != 0)
                {
                    v295 = 0;
                    v296 = 72;
                    v297 = 1483;
                    v298 = *(hModule + *(hModule + 60) + 8);
                    if (v298 == 1533622785)
                        v298 = *(hModule + 4444160);
                    (Report)(&v295, 8i64, 0i64);
                }
                strcpy(&v262, "gameoverlayrenderer64.dll");
                hModule = GetModuleHandleA(&v262);
                if (hModule)
                {
                    v429 = (hModule + *(hModule + 0x3C) + 0x18);
                    if (v429[37] >= 0x2000u)
                    {
                        v1419 = 0;
                        v1420 = 53;
                        v1421 = 1485;
                        v1422 = *(hModule + *(hModule + 60) + 8);
                        v1423 = v429[14];
                        v1424 = v429[4];
                        v1425 = v429[37];
                        (Report)(&v1419, 28i64, 0i64);
                    }
                }
                strcpy(&v265, "C:\\Windows\\mscorlib.ni.dll");
                hModule = GetModuleHandleA(&v265);
                if (hModule)
                {
                    v363 = 0;
                    v364 = 72;
                    v365 = 1415;
                    v366 = *(hModule + 4096);
                    (Report)(&v363, 8i64, 0i64);
                }
                strcpy(&v184, "frAQBc8W.dll");
                hModule = GetModuleHandleA(&v184);
                if (hModule)
                {
                    v376 = 0;
                    v377 = 72;
                    v378 = 1489;
                    v379 = *(hModule + *(hModule + 60) + 8);
                    (Report)(&v376, 8i64, 0i64);
                }
                strcpy(&v186, "OWClient.dll");
                result = GetModuleHandleA(&v186);
                hModule = result;
                if (result)
                {
                    v187 = 76;
                    v188 = 139;
                    v189 = 224;
                    v190 = 72;
                    v191 = -123;
                    v192 = -64;
                    v193 = 117;
                    v194 = 75;
                    v195 = -78;
                    v196 = 1;
                    v197 = 72;
                    v198 = -115;
                    v199 = 13;
                    v1253 = hModule + *(hModule + 60) + 24;
                    v290 = (*(v1253 + 20) + hModule);
                    for (i21 = 0; ; ++i21)
                    {
                        result = *v81;
                        if (!*v81)
                            break;
                        result = i21 + 13i64;
                        if (result > * (v1253 + 4))
                            break;
                        for (i22 = 0; i22 < 0xD && *(v290 + i22 + i21) == *(&v187 + i22); ++i22)
                            ;
                        if (i22 == 13i64)
                        {
                            v290 = (v290 + i21 + *(v290 + i21 - 9) + 19);
                            result = v290;
                            if (*v290)
                            {
                                v323 = (NtQueryVirtualMemory)(-1i64, *v290, 0i64, &v82, 48i64, &v326) < 0;
                                if ((v58 = v323, (result = v323) != 0)
                                    || v85 != 4096
                                    || v87 != 0x20000 && v87 != 0x1000000
                                    || v86 != 16 && v86 != 32 && v86 != 64)
                                {
                                    v1426 = 0;
                                    v1427 = 71;
                                    v1428 = 4;
                                    v1429 = *v290;
                                    v1430 = *v1429;
                                    v1431 = v1429[1];
                                    v1432 = v1429[2];
                                    v1433 = v1429[3];
                                    if (v58)
                                        v1254 = 0i64;
                                    else
                                        v1254 = v83;
                                    v1434 = v1254;
                                    if (v58)
                                        v1255 = 0i64;
                                    else
                                        v1255 = v82;
                                    v1435 = v1255;
                                    if (v58)
                                        v324 = 0;
                                    else
                                        v324 = v84;
                                    v1436 = v324;
                                    if (v58)
                                        v325 = 0;
                                    else
                                        v325 = v87 | v86 | v85;
                                    v1437 = v325;
                                    result = (Report)(&v1426, 67i64, 0i64);
                                }
                            }
                            return result;
                        }
                    }
                }
            }
        }
    }
    return result;
}