#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LeaderboardRowData.h"
#include "FortLeaderboardRowProxyInstance.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortLeaderboardRowProxyInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLeaderboardRowData RowData;
    
    UFortLeaderboardRowProxyInstance();
};

