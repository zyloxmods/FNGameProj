#pragma once
#include "CoreMinimal.h"
#include "AthenaPlayerViewModel.h"
#include "AthenaLocalPlayerViewModel.generated.h"

class AFortPlayerControllerAthena;
class UAthenaIndicatorPlayersCache;

UCLASS(Blueprintable)
class UAthenaLocalPlayerViewModel : public UAthenaPlayerViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerAthena* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaIndicatorPlayersCache* IndicatorCache;
    
public:
    UAthenaLocalPlayerViewModel();
};

