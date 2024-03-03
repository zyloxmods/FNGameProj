#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AthenaSpatialScreen.h"
#include "SpatialBattlePass.generated.h"

class UBattlePassScreen;
class UFortGameStateComponent_EventLevel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpatialBattlePass : public UAthenaSpatialScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ExploreRoomInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ExploreRoomCameraTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreen* BattlePass_Screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_EventLevel* EventLevelComponent;
    
public:
    USpatialBattlePass();
};

