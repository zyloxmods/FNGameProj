#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaBossHealthData.h"
#include "CarmineHUDBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCarmineHUDBase : public UUserWidget {
    GENERATED_BODY()
public:
    UCarmineHUDBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBossHealthBarChanged(const FAthenaBossHealthData& BossData);
    
};

