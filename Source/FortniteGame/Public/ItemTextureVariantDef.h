#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BaseVariantDef.h"
#include "CosmeticMetaTagContainer.h"
#include "ItemTextureVariant.h"
#include "ItemTextureVariantDef.generated.h"

USTRUCT(BlueprintType)
struct FItemTextureVariantDef : public FBaseVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemTextureVariant InnerDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmeticMetaTagContainer MetaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FilterOutItemsWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsSprays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsEmoji;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowClear;
    
    FORTNITEGAME_API FItemTextureVariantDef();
};

