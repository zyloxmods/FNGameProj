#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaChallengeInfoPanelEntry.generated.h"

class UAthenaChallengeProgressBar;
class UCommonRichTextBlock;
class UImage;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeInfoPanelEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_AssistIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Panel_GroupChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_AssistTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_ChallengeDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeProgressBar* ChallengeProgress_ObjectivesCompleted;
    
public:
    UAthenaChallengeInfoPanelEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerMissingAssistedChallenge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeInfoSet();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuestsUpdated();
    
};

