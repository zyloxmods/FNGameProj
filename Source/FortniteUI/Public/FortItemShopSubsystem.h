#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FortItemShopSubsystem.generated.h"

class UFortCommunityVotingManager;

UCLASS(Blueprintable)
class UFortItemShopSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingManager* VotingManager;
    
public:
    UFortItemShopSubsystem();
};

