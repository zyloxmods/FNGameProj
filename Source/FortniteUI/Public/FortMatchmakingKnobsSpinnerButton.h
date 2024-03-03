#pragma once
#include "CoreMinimal.h"
#include "CommonRotator.h"
#include "GameplayTagContainer.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortMatchmakingKnobsSpinnerButton.generated.h"

class APlayerState;
class UCommonTextBlock;
class UFortCreativeOption;
class UFortEditableFilteredCountedTextBox;
class UFortUserPermissions;
class UMaterial;
class UObject;
class USizeBox;
class USocialUser;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMatchmakingKnobsSpinnerButton : public UCommonRotator, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OptionDataObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* AssociatedPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortUserPermissions* RepresentedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeOption* CreativeOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* DisplayImageMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialUser* SocialUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_TextEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEditableFilteredCountedTextBox* FilteredTextEntry_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_OptionDisplayName;
    
public:
    UFortMatchmakingKnobsSpinnerButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpinnerOptionsVisiblity(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpinnerRotated(int32 Value, bool bUserInitiated);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSelectionRotated(int32 Value, bool bUserInitiated);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigatedRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigatedLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingStateChanged(bool bCurrentlyLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchingTags(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

