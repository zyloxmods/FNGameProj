#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "GameplayTagContainer.h"
#include "HighTowerAbilityContainerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIGHTOWERUI_API UHighTowerAbilityContainerWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShowAbilityIntroTag;
    
public:
    UHighTowerAbilityContainerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAbilityIntro();
    
};

