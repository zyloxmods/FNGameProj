#pragma once
#include "CoreMinimal.h"
#include "SocialManager.h"
#include "FortSocialManager.generated.h"

class UFortLocalTeam;

UCLASS(Blueprintable, Within=FortGameInstance)
class FORTNITEGAME_API UFortSocialManager : public USocialManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTutorialCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftLastPartyFromGameDisconnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortLocalTeam* LocalTeam;
    
public:
    UFortSocialManager();
};

