#pragma once
#include "CoreMinimal.h"
#include "EFortBrushSize.h"
#include "Components/Widget.h"
#include "Templates/SubclassOf.h"
#include "FortLevelIndicator.generated.h"

class UCommonNumericTextBlock;
class UCommonTextBlock;
class UCommonTextStyle;
class UFortItem;

UCLASS(Blueprintable)
class UFortLevelIndicator : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToRepresent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemForComparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldShowLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldShowMaximumLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsComparingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBrushSize::Type> ComparisonResultIndicatorSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLevelForComparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumLevelForComparison;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* LabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* CurrentLevelNumericTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* DivisionOperatorTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* MaximumLevelNumericTextBlock;
    
public:
    UFortLevelIndicator();
    UFUNCTION(BlueprintCallable)
    void SetShouldShowMaximumLevel(bool InShouldShowMaximumLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(UFortItem* NewItemToRepresent);
    
    UFUNCTION(BlueprintCallable)
    void SetItemForComparison(UFortItem* NewItemForComparison);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemToRepresentChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemForComparisonChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
    
};

