#pragma once
#include "CoreMinimal.h"
#include "CommonPoolableWidgetInterface.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "FortDisplayAttribute.h"
#include "FortAttributeListItem_NUI.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAttributeListItem_NUI : public UCommonUserWidget, public ICommonPoolableWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoverEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StatTag;
    
    UFortAttributeListItem_NUI();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ValueChanged(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewAttribute(const FFortDisplayAttribute& InPreviewAttribute);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayAttribute(const FFortDisplayAttribute& InDisplayAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPreviewAttribute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDisplayPreviewCopy(FFortDisplayAttribute& OutPreviewAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDisplayAttributeCopy(FFortDisplayAttribute& OutDisplayAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAttributeCopy(FFortDisplayAttribute& OutDisplayAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayAttributeChanged();
    
    UFUNCTION(BlueprintCallable)
    void ClearPreview();
    
    
    // Fix for true pure virtual functions not being implemented
};

