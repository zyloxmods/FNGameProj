#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortCommunityVotingRevealScreen.generated.h"

class UCommonBorder;
class UCommonButton;
class UDynamicEntryBox;
class UFortCommunityVotingManager;
class UFortCommunityVotingOptionReveal;
class UFortStoreFrontOfferInfo;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingRevealScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRevealPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRevealPlayRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingManager* VotingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCommunityVotingOptionReveal*> GeneratedOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCommunityVotingOptionReveal*> LoserOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingOptionReveal* WinnerOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* WinnerOfferInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_ItemReturns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* BorderRarityColored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingOptionReveal* ComOptionRevealWinner;
    
public:
    UFortCommunityVotingRevealScreen();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFinalAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFadeOutScreen(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFadeInAnimation();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDetailButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleCloseButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void Dismiss();
    
};

