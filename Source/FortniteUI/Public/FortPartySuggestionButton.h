#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "UObject/NoExportTypes.h"
#include "FortPartySuggestionButton.generated.h"

class UCommonTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPartySuggestionButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PartySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActionText;
    
public:
    UFortPartySuggestionButton();
    UFUNCTION(BlueprintCallable)
    void UpdateDisplayInfo();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuggestionChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuggestionAccepted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewSuggestionAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayInfoUpdated(const FDateTime& LFGTime, bool bIsInvited, bool bIsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDismissSuggestion();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSuggestionAccepted(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyStarted();
    
};

