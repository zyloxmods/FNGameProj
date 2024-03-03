#pragma once
#include "CoreMinimal.h"
#include "CreativeIslandDescriptionTag.h"
#include "FortActivatablePanel.h"
#include "FortCreativeMoreInfoPanel.generated.h"

class UCommonButton;
class UFortEditableFilteredCountedTextBox;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeMoreInfoPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldClearName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEditableFilteredCountedTextBox* FilteredTextEntryWidget_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEditableFilteredCountedTextBox* FilteredTextEntryWidget_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEditableFilteredCountedTextBox* FilteredTextEntryWidget_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEditableFilteredCountedTextBox* FilteredTextEntryWidget_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Apply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Clear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* Hbox_SetPhoto;
    
public:
    UFortCreativeMoreInfoPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSpinner(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowError(const FString& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSaveCallBack(bool bSuccess);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPublishComplete(const FString& Result);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreview();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccept();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePreviewClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleClearClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleAcceptClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCreativeIslandDescriptionTag> GetIslandDescriptionTags() const;
    
};

