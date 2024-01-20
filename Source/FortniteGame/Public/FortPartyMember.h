#pragma once
#include "CoreMinimal.h"
#include "Party/PartyMember.h"
#include "FortPartyMemberRepData.h"
#include "FortPartyMember.generated.h"

UCLASS(Blueprintable, NonTransient, Within=FortSocialParty)
class FORTNITEGAME_API UFortPartyMember : public UPartyMember {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPartyMemberRepData MemberRepData;
    
public:
    UFortPartyMember();
};

