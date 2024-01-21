#pragma once
#include "CoreMinimal.h"
#include "FortCommonPublicPersona.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCommonPublicPersona {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BannerIconId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BannerColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HomebaseName;
    
    FFortCommonPublicPersona();
};

