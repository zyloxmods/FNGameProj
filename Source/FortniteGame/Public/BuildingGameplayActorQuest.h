#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "BuildingGameplayActorQuest.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API ABuildingGameplayActorQuest : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuppressSimpleInteractionWidgetForTouch: 1;
    
public:
    ABuildingGameplayActorQuest();
};

