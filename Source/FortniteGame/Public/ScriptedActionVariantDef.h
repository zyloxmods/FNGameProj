#pragma once
#include "CoreMinimal.h"
#include "BaseVariantDef.h"
#include "CosmeticMetaTagContainer.h"
#include "ScriptedActionVariant.h"
#include "ScriptedActionVariantDef.generated.h"

USTRUCT(BlueprintType)
struct FScriptedActionVariantDef : public FBaseVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptedActionVariant> VariantActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmeticMetaTagContainer MetaTags;
    
    FORTNITEGAME_API FScriptedActionVariantDef();
};

