#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCommunityVotingOptionReveal.generated.h"

class UFortCommunityVotingManager;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingOptionReveal : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingManager* VotingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Duplicate;
    
public:
    UFortCommunityVotingOptionReveal();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartRevealAnimation(float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RevealWinnerAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnWinnerRevealAnimationFinished();
    
};

