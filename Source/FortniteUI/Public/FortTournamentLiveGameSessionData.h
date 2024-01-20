#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortTournamentLiveGameSessionData.generated.h"

class USocialUser;

UCLASS(Blueprintable)
class UFortTournamentLiveGameSessionData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USocialUser*> UserInfo;
    
public:
    UFortTournamentLiveGameSessionData();
};

