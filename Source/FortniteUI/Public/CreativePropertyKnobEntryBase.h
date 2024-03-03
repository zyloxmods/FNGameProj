#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "OnKnobEntryEditWidgetStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CreativePropertyKnobEntryBase.generated.h"

class UCommonTextBlock;
class UCommonWidgetSwitcher;
class UCreativePropertyEditWidgetBase;
class UPanelWidget;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePropertyKnobEntryBase : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKnobEntryEditWidgetStateChanged OnKnobEntryEditWidgetStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCreativePropertyEditWidgetBase* EntryEditWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FallbackEditWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FallbackUserOptionEditWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FallbackStringUserOptionEditWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FallbackMusicUserOptionEditWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FallbackMessageComponentEditWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FallbackDeviceButtonComponentEditWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* PanelWidget_SummaryBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* PanelWidget_ContentBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_EntryDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_EntryDisplayedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_Content;
    
public:
    UCreativePropertyKnobEntryBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsModified(bool bModified);
    
private:
    UFUNCTION(BlueprintCallable)
    void InternalOnEditWidgetModified(bool bModified);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsModified();
    
    UFUNCTION(BlueprintCallable)
    void ForceFocusWidget();
    
private:
    UFUNCTION(BlueprintCallable)
    void DeselectEditWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearModified();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PostInitSummaryData(UCreativePropertyEditWidgetBase* CustomEditWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnModified(bool bModified);
    
    
    // Fix for true pure virtual functions not being implemented
};

