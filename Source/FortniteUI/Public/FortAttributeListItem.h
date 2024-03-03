#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortDisplayAttribute.h"
#include "FortAttributeListItem.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAttributeListItem : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoverEnabled;
    
    UFortAttributeListItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ValueChanged(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewAttribute(const FFortDisplayAttribute& InPreviewAttribute);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayAttribute(const FFortDisplayAttribute& InDisplayAttribute, FFortDisplayAttribute& DeltaAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewEnded();
    
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
    
};

