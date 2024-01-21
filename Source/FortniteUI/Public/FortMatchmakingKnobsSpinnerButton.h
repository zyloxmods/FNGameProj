#pragma once
#include "CoreMinimal.h"
#include "CommonRotator.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortMatchmakingKnobsSpinnerButton.generated.h"

class UCommonTextBlock;
class UFortEditableFilteredCountedTextBox;
class USocialUser;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMatchmakingKnobsSpinnerButton : public UCommonRotator, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEditableFilteredCountedTextBox* FilteredTextEntryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialUser* SocialUser;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* OptionDisplayName;
    
    UFortMatchmakingKnobsSpinnerButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpinnerOptionsVisiblity(bool bVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSelectionRotated(int32 Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingStateChanged(bool bCurrentlyLoading);
    
    
    // Fix for true pure virtual functions not being implemented
};

