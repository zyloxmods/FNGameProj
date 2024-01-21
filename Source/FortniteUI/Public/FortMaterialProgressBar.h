#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EFortMaterialProgressBarSection.h"
#include "EFortMaterialProgressBarSectionColorNumber.h"
#include "EFortMaterialProgressBarSectionOverflowBehavior.h"
#include "FortMaterialProgressBarSectionInfo.h"
#include "Templates/SubclassOf.h"
#include "FortMaterialProgressBar.generated.h"

class UCommonBorder;
class UFortMaterialProgressBarStyle;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMaterialProgressBar : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMaterialProgressBarStyle> Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BackgroundColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMaterialProgressBarSectionOverflowBehavior OverflowBehavior;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMaterialProgressBarSectionInfo BarSectionInfo[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressBarMID;
    
public:
    UFortMaterialProgressBar();
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UFortMaterialProgressBarStyle> BarStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressBarSectionPercent(TEnumAsByte<EFortMaterialProgressBarSection::Type> BarSection, float Percent);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressBarSectionColor(TEnumAsByte<EFortMaterialProgressBarSection::Type> BarSection, FLinearColor Color, EFortMaterialProgressBarSectionColorNumber ColorNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(FLinearColor Color);
    
};

