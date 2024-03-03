#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortCommunityVotingTileCandidate.generated.h"

class UCommonLoadGuard;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingTileCandidate : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Candidate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* LoadGuard;
    
public:
    UFortCommunityVotingTileCandidate();
    UFUNCTION(BlueprintCallable)
    void OnImageAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimateImage();
    
};

