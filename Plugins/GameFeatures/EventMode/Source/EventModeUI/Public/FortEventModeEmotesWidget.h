#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortEventModeEmotesWidget.generated.h"

class UFortMontageItemDefinitionBase;
class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UFortEventModeEmotesWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageItemDefinitionBase> Emote1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageItemDefinitionBase> Emote2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageItemDefinitionBase> Emote3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortMontageItemDefinitionBase>> RandomEmotes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_Emote1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_Emote2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_Emote3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_EmoteRandom;
    
public:
    UFortEventModeEmotesWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusStateChanged(bool bIsFocusing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusAvailableChanged(bool bIsFocusAvailable);
    
};

