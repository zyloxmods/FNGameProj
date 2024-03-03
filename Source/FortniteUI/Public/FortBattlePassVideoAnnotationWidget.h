#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortBattlePassVideoAnnotationWidget.generated.h"

class UCommonTextBlock;
class UCurveFloat;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBattlePassVideoAnnotationWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* IntroOutroCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
public:
    UFortBattlePassVideoAnnotationWidget();
};

