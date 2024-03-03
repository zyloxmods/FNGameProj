#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "LinkAcrossNumericalIndicatorActionSymbol.h"
#include "HUDLayoutToolV2_LinkAcrossNumericalIndicator.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_LinkAcrossNumericalIndicator : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MaximumInstancesColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinkAcrossNumericalIndicatorActionSymbol> ActionSymbols;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActionSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_InstanceCounter;
    
public:
    UHUDLayoutToolV2_LinkAcrossNumericalIndicator();
};

