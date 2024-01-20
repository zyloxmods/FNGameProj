#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortTeamMember.generated.h"

class UFortSocialUser;

UCLASS(Blueprintable, Within=FortLocalTeam)
class FORTNITEGAME_API UFortTeamMember : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSocialUser* SocialUser;
    
public:
    UFortTeamMember();
};

