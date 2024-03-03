#pragma once
#include "CoreMinimal.h"
#include "CreativeIslandDescriptionTag.h"
#include "CreativePublishOptions.h"
#include "Types/SlateEnums.h"
#include "FortActivatablePanel.h"
#include "FortCreativePublishModal.generated.h"

class AFortVolume;
class UAsyncTaskQueue;
class UCommonButton;
class UCommonTextBlock;
class UCommonWidgetSwitcher;
class UEditableTextBox;
class UMultiLineEditableTextBox;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativePublishModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DescriptionEntryCharLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NameEntryCharLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFakePublishingFlow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DescriptionTextOkForSubmit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NameTextOkForSubmit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTagsRequiredToPublish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Container_YoutubeStuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_IslandCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ErrorInNameField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ErrorInDescriptionField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ErrorInRequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ErrorOnPublish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CharCountTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CharCountDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_IslandPublishedSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Submit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CopyCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* EditText_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMultiLineEditableTextBox* MultiLineEditText_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* EditText_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* EditText_YoutubeVideoId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortVolume* VolumeToPublish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncTaskQueue* SanitizationTasksQueue;
    
public:
    UFortCreativePublishModal();
    UFUNCTION(BlueprintCallable)
    void PublishMyCurrentCreativePlot(FCreativePublishOptions MyPublishOptions);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValidCheckComplete(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPublishError();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPublishedLinksChanged(const FString& ErrorCode, const FString& Mnemonic);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPublishBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNameTextCommitted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDescriptionTextCommitted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCodeCopied();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCodeConfirmation();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSubmitClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleNameTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommittMethod);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleNameTextChanged(const FText& Text);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDescriptionTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommittMethod);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDescriptionTextChanged(const FText& Text);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCopyCode();
    
    UFUNCTION(BlueprintCallable)
    void HandleCodeConfirmation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCreativeIslandDescriptionTag> GetIslandDescriptionTags() const;
    
};

