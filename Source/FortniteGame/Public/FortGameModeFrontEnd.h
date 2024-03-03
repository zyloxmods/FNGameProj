#pragma once
#include "CoreMinimal.h"
#include "FortGameMode.h"
#include "FortGameModeFrontEnd.generated.h"

class AFortTheaterMapViewer;

UCLASS(Blueprintable, NonTransient)
class AFortGameModeFrontEnd : public AFortGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortTheaterMapViewer* TheaterMapViewer;
    
    AFortGameModeFrontEnd();
};

