#pragma once
#include "CoreMinimal.h"
#include "CommonVideoPlayer.h"
#include "FortBattlePassVideoAnnotation.h"
#include "Templates/SubclassOf.h"
#include "FortBattlePassVideoDisplay.generated.h"

class UFortBattlePassVideoAnnotationWidget;

UCLASS(Blueprintable)
class UFortBattlePassVideoDisplay : public UCommonVideoPlayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortBattlePassVideoAnnotationWidget> AnnotationWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBattlePassVideoAnnotation> VideoAnnotations;
    
public:
    UFortBattlePassVideoDisplay();
};

