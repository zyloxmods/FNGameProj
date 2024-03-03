#pragma once
#include "CoreMinimal.h"
#include "SocialManager.h"
#include "ESocialImportPanelPlatform.h"
#include "FortSocialManager.generated.h"

class UFortLocalTeam;
class UFortSocialUser;

UCLASS(Blueprintable, Within=FortGameInstance)
class FORTNITEGAME_API UFortSocialManager : public USocialManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESocialImportPanelPlatform SocialImportPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTutorialCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftLastPartyFromGameDisconnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortLocalTeam* LocalTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSocialUser* CurrentJoinAndSpectateTarget;
    
public:
    UFortSocialManager();
};

