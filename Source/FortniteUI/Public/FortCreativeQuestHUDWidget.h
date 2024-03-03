#pragma once
#include "CoreMinimal.h"
#include "MinigameWidgetBase.h"
#include "FortCreativeQuestHUDWidget.generated.h"

class UCommonTextBlock;
class UCreativeQuestComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortCreativeQuestHUDWidget : public UMinigameWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCreativeQuestComponent* LastKnownQuestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CurrentAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TargetAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_QuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_QuestDetails;
    
public:
    UFortCreativeQuestHUDWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuestChanged(UCreativeQuestComponent* CurrentQuestComponent, bool bHasActiveQuest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProgressChanged();
    
};

