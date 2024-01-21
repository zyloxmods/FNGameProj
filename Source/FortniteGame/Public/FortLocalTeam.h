#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortLocalTeam.generated.h"

class UFortTeamMember;

UCLASS(Abstract, Blueprintable, Within=FortSocialManager)
class FORTNITEGAME_API UFortLocalTeam : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortTeamMember*> TeamMembers;
    
public:
    UFortLocalTeam();
};

