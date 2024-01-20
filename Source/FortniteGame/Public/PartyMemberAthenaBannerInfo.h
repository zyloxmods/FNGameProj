#pragma once
#include "CoreMinimal.h"
#include "PartyMemberAthenaBannerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberAthenaBannerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BannerIconId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BannerColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeasonLevel;
    
    FORTNITEGAME_API FPartyMemberAthenaBannerInfo();
};

