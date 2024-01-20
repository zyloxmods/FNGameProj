#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortHUDElementWidget.h"
#include "SurvivalObjectiveIconData.h"
#include "SurvivalObjectiveText.h"
#include "DeimosSurvivalWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDeimosSurvivalWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSurvivalObjectiveText> SurvivalStateDefaultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag ObjectiveTag;
    
public:
    UDeimosSurvivalWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateStateText(const FText& StateText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateObjectiveIcon(const FSurvivalObjectiveIconData& ObjectiveIconData);
    
};

