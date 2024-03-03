#pragma once
#include "CoreMinimal.h"
#include "CommonPoolableWidgetInterface.h"
#include "CommonUserWidget.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortItemQuantityPair.h"
#include "FortItemEntryPreviewData.h"
#include "FortItemQuantityListEntryBase.generated.h"

class UFortItem;
class UFortItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemQuantityListEntryBase : public UCommonUserWidget, public ICommonPoolableWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
public:
    UFortItemQuantityListEntryBase();
    UFUNCTION(BlueprintCallable)
    void SetPreviewData(const FFortItemEntryPreviewData& PreviewData);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInstanceAndQuantity(const FFortItemInstanceQuantityPair& ItemQuantityPair, const bool ShouldTreatAsReset);
    
    UFUNCTION(BlueprintCallable)
    void SetItemDefinitionAndQuantity(const FFortItemQuantityPair& ItemQuantityPair, const bool ShouldTreatAsReset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshListEntry();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingPreviewed() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemOrQuantitySetBP(const bool IsBeingReset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPreviewData(FFortItemEntryPreviewData& OutPreviewData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemDefinition* GetItemDefinition() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPreviewData();
    
    
    // Fix for true pure virtual functions not being implemented
};

