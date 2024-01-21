#pragma once
#include "CoreMinimal.h"
#include "FortPvPMission.h"
#include "FortPvPMission_CTF.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortPvPMission_CTF : public AFortPvPMission {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TeamCaptureTotals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalCapturesToWin;
    
public:
    AFortPvPMission_CTF();
};

