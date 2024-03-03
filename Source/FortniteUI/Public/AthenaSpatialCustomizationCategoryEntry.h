#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AthenaSpatialNavigationButton.h"
#include "ESpatialCustomizationCategoryState.h"
#include "AthenaSpatialCustomizationCategoryEntry.generated.h"

class UAthenaSpatialCustomizationChoice;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortTokenType;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UAthenaSpatialCustomizationCategoryEntry : public UAthenaSpatialNavigationButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpatialCustomizationChoice* Choice_SelectedChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_EntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_EntryName_Big;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_StateDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTokenType* CategoryKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseColorPicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCategoryDefaultColorIsNull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerClampingColorBound;
    
public:
    UAthenaSpatialCustomizationCategoryEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryStateSet(ESpatialCustomizationCategoryState State, FLinearColor StateColor);
    
};

