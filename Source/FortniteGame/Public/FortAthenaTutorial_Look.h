#pragma once
#include "CoreMinimal.h"
#include "FortAthenaTutorialBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaTutorial_Look.generated.h"

class UFortAthenaTutorialScreen;

UCLASS(Blueprintable)
class AFortAthenaTutorial_Look : public AFortAthenaTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaTutorialScreen> ScreenSwipeToLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaTutorialScreen> ScreenFindMarker;
    
    AFortAthenaTutorial_Look();
};

