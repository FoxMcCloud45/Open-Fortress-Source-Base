// ========= Copyright Open Fortress Developers, CC-BY-NC-SA ============
// Purpose: 
// Author(s): MaartenS11
//
#include "cbase.h"
#include "entity_ofstart.h"

LINK_ENTITY_TO_CLASS(info_player_teamspawn, COFTeamSpawn);

BEGIN_DATADESC(COFTeamSpawn)
END_DATADESC()

void COFTeamSpawn::Activate()
{
	/*  float fVar1;
    float fVar2;
    float fVar3;
    vtableCTFTeamSpawn *pvVar4;
    vtableCTFTeamSpawn *pvVar5;
    undefined *puVar6;
    undefined *puVar7;
    int iVar8;
    vtableCTFTeamSpawn *pvVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    Vector local_d4 [12];
    Vector local_c8 [32];
    float local_a8;
    ushort local_9e;
    CTraceFilterSimple local_7c [4];
    float local_6c;
    float local_68;
    float local_64;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    uint local_4c;
    uint local_48;
    uint local_44;
    float local_3c;
    float local_38;
    float local_34;
    bool local_2c;
    undefined local_2b;
    int local_14;
  
    puVar6 = ___stack_chk_guard;
    local_14 = *(int *)___stack_chk_guard;*/
	BaseClass::Activate();
    /*  puVar7 = PTR__g_pGameRules_00e310a8;
    iVar8 = (**(code **)(**(int **)PTR__g_pGameRules_00e310a8 + 0x80))
                    (*(int **)PTR__g_pGameRules_00e310a8);
    fVar10 = *(float *)(iVar8 + 0xc);
    fVar11 = *(float *)(iVar8 + 0x10);
    fVar1 = *(float *)(iVar8 + 0x14);
    iVar8 = (**(code **)(**(int **)puVar7 + 0x80))(*(int **)puVar7);
    fVar12 = *(float *)(iVar8 + 0x18);
    fVar2 = *(float *)(iVar8 + 0x1c);
    fVar3 = *(float *)(iVar8 + 0x20);
    pvVar9 = this[0x4a].vtable;
    if (((uint)pvVar9 & 0x800) != 0) {
    CalcAbsolutePosition((CBaseEntity *)this);
    pvVar9 = this[0x4a].vtable;
    }
    if (((uint)pvVar9 & 0x800) != 0) {
    CalcAbsolutePosition((CBaseEntity *)this);
    }
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_2b = 0;
    local_3c = (fVar12 - fVar10) * 0.50000000;
    local_38 = (fVar2 - fVar11) * 0.50000000;
    local_34 = (fVar3 - fVar1) * 0.50000000;
    local_2c = local_38 * local_38 + local_3c * local_3c + local_34 * local_34 < 0.00000100;
    fVar10 = (fVar12 + fVar10) * 0.50000000;
    fVar12 = (fVar2 + fVar11) * 0.50000000;
    fVar11 = (fVar3 + fVar1) * 0.50000000;
    local_6c = (float)this[0xa9].vtable + fVar10;
    local_68 = (float)this[0xaa].vtable + fVar12;
    local_64 = (float)this[0xab].vtable + fVar11;
    local_4c = (uint)fVar10 ^ 0x80000000;
    local_48 = (uint)fVar12 ^ 0x80000000;
    local_44 = (uint)fVar11 ^ 0x80000000;
    CTraceFilterSimple(local_7c,(IHandleEntity *)0x0,8,(FuncDef87 *)0x0);
    (**(code **)(**(int **)PTR__enginetrace_00e3116c + 0x10))(*(int **)PTR__enginetrace_00e3116c);
    if (*(int *)(*(int *)(PTR__r_visualizetraces_00e31170 + 0x1c) + 0x30) != 0) {
    DebugDrawLine(local_d4,local_c8,0xff,0xff,0,true,-1.00000000);
    }
    if (((local_a8 != 1.00000000) || ((local_9e & 0xff) == 1)) || ((local_9e & 0xff00) == 0x100)) {
    pvVar9 = this[0x4a].vtable;
    if (((uint)pvVar9 & 0x800) != 0) {
        CalcAbsolutePosition((CBaseEntity *)this);
        pvVar9 = this[0x4a].vtable;
    }
    pvVar4 = this[0xa9].vtable;
    if (((uint)pvVar9 & 0x800) != 0) {
        CalcAbsolutePosition((CBaseEntity *)this);
        pvVar9 = this[0x4a].vtable;
    }
    pvVar5 = this[0xaa].vtable;
    if (((uint)pvVar9 & 0x800) != 0) {
        CalcAbsolutePosition((CBaseEntity *)this);
    }
    __Z6DevMsgPKcz("Spawnpoint at (%.2f %.2f %.2f) is not clear.\n",(double)(float)pvVar4,
                    (double)(float)pvVar5,(double)(float)this[0xab].vtable);
    }
    if (*(int *)puVar6 == local_14) {
    return;
    }
    ___stack_chk_fail(); */
}