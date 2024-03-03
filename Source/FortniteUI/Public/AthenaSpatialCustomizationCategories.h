#pragma once
#include "CoreMinimal.h"
#include "AthenaSpatialCustomizationCategoryGroup.h"
#include "AthenaSpatialCustomizationSubscreenBase.h"
#include "AthenaSpatialCustomizationCategories.generated.h"

class UAthenaSpatialCustomizationCategoryEntry;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialCustomizationCategories : public UAthenaSpatialCustomizationSubscreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* IntroCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FAthenaSpatialCustomizationCategoryGroup> CategoryGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSpatialCustomizationCategoryEntry* LastSelectedCategory;
    
public:
    UAthenaSpatialCustomizationCategories();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCaptureMode(bool bCaptureMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCategoryGroupProgress(FName CategoryGroup, int32 NumCategoriesFinalized);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCategoriesSetup(int32 TotalNumCategoriesFinalized);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddCategoryGroup(FName CategoryGroup, const TArray<UAthenaSpatialCustomizationCategoryEntry*>& CategoryEntries);
    
};

