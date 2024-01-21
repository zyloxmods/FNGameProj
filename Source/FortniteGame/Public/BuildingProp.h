#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "BuildingTimeOfDayLights.h"
#include "BuildingProp.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable, MinimalAPI)
class ABuildingProp : public ABuildingTimeOfDayLights {
    GENERATED_BODY()
public:
    ABuildingProp();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BlueprintModifyIncomingDamage(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser);
    
};

