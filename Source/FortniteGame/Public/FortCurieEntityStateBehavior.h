#pragma once
#include "CoreMinimal.h"
#include "CurieEntityStateBehavior.h"
#include "Engine/DataTable.h"
#include "FortDamageSourceInterface.h"
#include "FortCurieEntityStateBehavior.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortCurieEntityStateBehavior : public UCurieEntityStateBehavior, public IFortDamageSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bActAsDmgSrcDirectly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageDataTableRowHandle;
    
    UFortCurieEntityStateBehavior();
    
    // Fix for true pure virtual functions not being implemented
};

