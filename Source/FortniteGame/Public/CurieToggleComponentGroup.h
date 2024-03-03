#pragma once
#include "CoreMinimal.h"
#include "CurieToggleGroupMemberStateChangeSignatureInternalDelegate.h"
#include "CurieToggleGroupSameStateSignatureInternalDelegate.h"
#include "CurieToggleComponentGroup.generated.h"

class UFortCurieToggleComponent;

USTRUCT(BlueprintType)
struct FCurieToggleComponentGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortCurieToggleComponent*> GroupComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurieToggleGroupSameStateSignatureInternal OnToggleGroupFullyActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurieToggleGroupSameStateSignatureInternal OnToggleGroupFullyInactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurieToggleGroupMemberStateChangeSignatureInternal OnToggleGroupMemberStateChange;
    
    FORTNITEGAME_API FCurieToggleComponentGroup();
};

